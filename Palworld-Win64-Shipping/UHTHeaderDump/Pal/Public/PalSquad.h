#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalSquad.generated.h"

class AActor;
class APalAISquadLeashActor;
class UPalAIBlackboardBase;

UCLASS(BlueprintType)
class PAL_API UPalSquad : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSomeOneDeadDelegate, FPalDeadInfo, DeadInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemovedSquadMemberDelegate, AActor*, RemovedMember);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatPropagationDelegate, AActor*, StartActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedSquadMemberDelegate, AActor*, AddedMember);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEscapePropagationDelegate, AActor*, StartActor, AActor*, TargetActor);
    
    UPROPERTY(BlueprintAssignable)
    FOnAddedSquadMemberDelegate OnAddedSquadMemberDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRemovedSquadMemberDelegate OnRemovedSquadMemberDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnSomeOneDeadDelegate OnSomeOneDeadDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCombatPropagationDelegate OnCombatPropagationDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEscapePropagationDelegate OnEscapePropagationDelegate;
    
private:
    UPROPERTY(Transient)
    FPalInstanceID LeaderId;
    
    UPROPERTY(Transient)
    TArray<FPalInstanceID> MemberIDList;
    
    UPROPERTY(Transient)
    UPalAIBlackboardBase* LeaderBB;
    
    UPROPERTY(Transient)
    APalAISquadLeashActor* LeashActor;
    
public:
    UPalSquad();

    UFUNCTION(BlueprintCallable)
    void UpdateLeader(FPalInstanceID NextLeader);
    
private:
    UFUNCTION()
    void RemoveWhenDestoryActor(AActor* DestoryActor);
    
public:
    UFUNCTION(BlueprintPure)
    void GetMemberID(TArray<FPalInstanceID>& OutList);
    
    UFUNCTION(BlueprintCallable)
    void EscapeStart(AActor* StartActor, AActor* Target);
    
private:
    UFUNCTION()
    void DeadAndUpdateLeader(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void CombatStart(AActor* StartActor);
    
    UFUNCTION(BlueprintCallable)
    void AddCharacter(FPalInstanceID PalInstanceID);
    
};

