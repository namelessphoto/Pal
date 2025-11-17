#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Controller -FallbackName=Controller
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayResourceSet -FallbackName=GameplayResourceSet
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTaskOwnerInterface -FallbackName=GameplayTaskOwnerInterface
#include "AIMoveCompletedSignatureDelegate.h"
#include "AIPerceptionListenerInterface.h"
#include "EPathFollowingRequestResult.h"
#include "EPathFollowingStatus.h"
#include "GenericTeamAgentInterface.h"
#include "Templates/SubclassOf.h"
#include "AIController.generated.h"

class AActor;
class UAIPerceptionComponent;
class UBehaviorTree;
class UBlackboardComponent;
class UBlackboardData;
class UBrainComponent;
class UGameplayTaskResource;
class UGameplayTasksComponent;
class UNavigationQueryFilter;
class UPathFollowingComponent;
class UPawnActionsComponent;

UCLASS()
class AIMODULE_API AAIController : public AController, public IAIPerceptionListenerInterface, public IGameplayTaskOwnerInterface, public IGenericTeamAgentInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStartAILogicOnPossess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStopAILogicOnUnposses: 1;
    
public:
    UPROPERTY()
    uint8 bLOSflag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSkipExtraLOSChecks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bWantsPlayerState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSetControlRotationFromPawnOrientation: 1;
    
private:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UPathFollowingComponent* PathFollowingComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBrainComponent* BrainComponent;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UAIPerceptionComponent* PerceptionComponent;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UPawnActionsComponent* ActionsComp;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBlackboardComponent* Blackboard;
    
    UPROPERTY(Instanced)
    UGameplayTasksComponent* CachedGameplayTasksComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilterClass;
    
public:
    UPROPERTY(BlueprintAssignable)
    FAIMoveCompletedSignature ReceiveMoveCompleted;
    
    AAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnclaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
    
    UFUNCTION(BlueprintCallable)
    void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveBlockDetection(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool RunBehaviorTree(UBehaviorTree* BTAsset);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    
public:
    UFUNCTION()
    void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFocus(AActor* NewFocus);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFocalPoint(FVector FP);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearFocus();
    
    UFUNCTION(BlueprintPure)
    bool HasPartialPath() const;
    
    UFUNCTION(BlueprintPure)
    UPathFollowingComponent* GetPathFollowingComponent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPathFollowingStatus> GetMoveStatus() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetImmediateMoveDestination() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetFocusActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFocalPointOnActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFocalPoint() const;
    
    UFUNCTION(BlueprintPure)
    UAIPerceptionComponent* GetAIPerceptionComponent();
    
    UFUNCTION(BlueprintCallable)
    void ClaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
    

    // Fix for true pure virtual functions not being implemented
};

