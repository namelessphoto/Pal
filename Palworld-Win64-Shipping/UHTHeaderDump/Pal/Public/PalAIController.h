#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingRequestResult -FallbackName=EPathFollowingRequestResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalCharacterImportanceType.h"
#include "PalDeadInfo.h"
#include "PalPathFollowingBlockDetectionParams.h"
#include "Templates/SubclassOf.h"
#include "PalAIController.generated.h"

class AActor;
class APalCharacter;
class APalPlayerCharacter;
class UNavigationQueryFilter;
class UPalAIActionComponent;
class UPalAIBlackboardBase;
class UPalAICombatModule;
class UPalActiveSkillSlot;
class UPalHate;
class UPalSquad;

UCLASS()
class PAL_API APalAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<AActor*> TargetPlayers;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<AActor*> TargetNPCs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPalAICombatModule> CombatModuleClass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalActiveSkillSlot* SkillSlot;
    
    UPROPERTY(Transient)
    FString DebugOrganizationName;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    APalCharacter* R1AttackTarget;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float MinAIActionComponentTickInterval;
    
private:
    UPROPERTY(Transient)
    bool bIsActive;
    
    UPROPERTY(Transient)
    bool IsSquadBehaviour;
    
    UPROPERTY(Transient)
    bool IsNotSleepWildLife;
    
    UPROPERTY(Transient)
    UPalSquad* MySquad;
    
    UPROPERTY(Transient)
    UPalHate* HateSystem;
    
    UPROPERTY(Instanced, Transient, VisibleAnywhere)
    UPalAIActionComponent* AIActionComponent;
    
    UPROPERTY(Transient)
    UPalAIBlackboardBase* PalAIBlackboard;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverwriteBlockDetectionParams;
    
    UPROPERTY(EditDefaultsOnly)
    FPalPathFollowingBlockDetectionParams BlockDetectionParams;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalAIBlackboardBase> PalBlackboardClass;
    
private:
    UPROPERTY(Transient)
    FTimerHandle DeadBodyDeleteTimerHandle;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsDeadBodyTimeDelate;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsSelfTimeDelate_FromSpawnTime;
    
    UPROPERTY(Transient)
    FTimerHandle SelfDeleteTimerHandle;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsSelfTimeDelate_FromSpawnTime_ForVisitor;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldCheckStuckByTick;
    
    UPROPERTY(Transient)
    FTimerHandle InactiveAIEventTimer;
    
public:
    APalAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WaitForSeconds(float Time);
    
private:
    UFUNCTION()
    void SkillCoolDownByTimerEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void SimpleMoveToActorWithLineTraceGround(const AActor* GoalActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowHateArrow();
    
    UFUNCTION(BlueprintCallable)
    void ShowActionDebug();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInitialValue(bool IsSquad, bool NotSleep);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAI(bool Active);
    
    UFUNCTION(NetMulticast, Reliable)
    void RPCDummy();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult> PalMoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPaths);
    
private:
    UFUNCTION()
    void OnDeadTimerStart(FPalDeadInfo Info);
    
protected:
    UFUNCTION()
    void OnChangedActiveCharacter(const bool bActive);
    
private:
    UFUNCTION()
    void OnChangeChangeImportance(EPalCharacterImportanceType Next);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyTalkStart(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyTalkEnd(APalPlayerCharacter* TalkPlayer);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation_ErrorSupportMove(FVector GoalLocation);
    
    UFUNCTION(BlueprintCallable)
    void MoveToDirectly(FVector GoalLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsOnNavMesh_TargetLocation(FVector TargetLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsOnNavMesh();
    
    UFUNCTION(BlueprintPure)
    bool IsLeader();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistPathForLocation_ForBP_HeightRangeCheck(const FVector Location, const float AcceptanceRadius, const float UpOffset, const float DownOffset, FVector& OutGoalLocation);
    
    UFUNCTION(BlueprintPure)
    bool IsExistPathForLocation_ForBP(const FVector Location, const float AcceptanceRadius) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveAI() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FGuid GetTargetBaseCampIDForRaidBoss();
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetSquadLeader();
    
    UFUNCTION(BlueprintPure)
    UPalSquad* GetSquad();
    
    UFUNCTION(BlueprintPure)
    UPalAIBlackboardBase* GetMyPalBlackboard();
    
    UFUNCTION(BlueprintPure)
    UPalAIBlackboardBase* GetLeaderPalBlackboard() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsSquadBehaviour();
    
    UFUNCTION(BlueprintPure)
    bool GetIsnotSleepWildLife();
    
    UFUNCTION(BlueprintPure)
    UPalHate* GetHateSystem();
    
    UFUNCTION(BlueprintPure)
    UPalAIActionComponent* GetAIActionComponent();
    
    UFUNCTION(BlueprintCallable)
    bool FindReachablePathLocation(TArray<FVector> RequestLocationArray, FVector& OutGoalLocation);
    
    UFUNCTION(BlueprintCallable)
    bool FindNearestNavmeshPointFromSelf(FVector& OutLocation);
    
private:
    UFUNCTION()
    void DeleteSelfDeadBody();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreatePalBlackboard();
    
    UFUNCTION(BlueprintCallable)
    AActor* CopyTargetFromOtherAI(const AActor* FromAcotr);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddTargetPlayer_ForEnemy(AActor* PlayerOrPal);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetNPC(AActor* NPC);
    
};

