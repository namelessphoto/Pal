#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EPalBaseCampWorkerDirectionBattleType.h"
#include "EPalBaseCampWorkerDirectorState.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalBaseCampWorkAssignRequest.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalWorkAssignRequirementParameter.h"
#include "PalBaseCampWorkerDirector.generated.h"

class APalCharacter;
class UPalBaseCampModel;
class UPalBaseCampWorkerDirectorBattle;
class UPalBaseCampWorkerTaskBase;
class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalIndividualCharacterSlot;
class UPalIndividualCharacterSlotsObserver;
class UPalWorkBase;

UCLASS(BlueprintType)
class UPalBaseCampWorkerDirector : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRemovedWorkerDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAddNewWorkerDelegate, UPalIndividualCharacterHandle*, NewCharacter);
    
    UPROPERTY(BlueprintAssignable)
    FAddNewWorkerDelegate OnAddNewWorkerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRemovedWorkerDelegate OnRemovedWorkerInServerDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid BaseCampId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FTransform SpawnTransform;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CharacterContainer)
    UPalIndividualCharacterContainer* CharacterContainer;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Transient)
    EPalMapBaseCampWorkerOrderType CurrentOrderType;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Replicated, Transient)
    EPalBaseCampWorkerDirectionBattleType CurrentBattleType;
    
    UPROPERTY(Transient)
    UPalIndividualCharacterSlotsObserver* SlotObserverForServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalBaseCampWorkerDirectorBattle* BattleDirector;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampWorkAssignRequest> RequiredAssignWorks;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalInstanceID> WaitingWorkerIndividualIds;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 WorkerEventTickCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalBaseCampWorkerTaskBase*> WorkerTasks;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalBaseCampWorkerDirectorState State;
    
public:
    UPalBaseCampWorkerDirector();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
private:
    UFUNCTION()
    void OnUpdateWorkerFriendshipRank(UPalIndividualCharacterParameter* IndividualParameter, const int32 NewRank, const int32 OldRank, bool bIsFirstRankup);
    
    UFUNCTION()
    void OnUpdateOwnerBaseCampStatus_ServerInternal(UPalBaseCampModel* OwnerBaseCamp);
    
    UFUNCTION()
    void OnSpawnedCharacterInServer(FPalInstanceID IndividualId);
    
    UFUNCTION()
    void OnRequiredAssignWork_ServerInternal(UPalWorkBase* Work, const FPalWorkAssignRequirementParameter& RequirementParameter);
    
protected:
    UFUNCTION()
    void OnRep_CharacterContainer();
    
private:
    UFUNCTION()
    void OnRaisedPhantomCharacterInServer(FPalInstanceID IndividualId, int32 PhantomId);
    
    UFUNCTION()
    void OnNotifiedUnassignWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnDeadWorkerInServer_Internal(APalCharacter* DeadCharacter);
    
    UFUNCTION()
    void OnDeadWorkerInServer(const FPalDeadInfo Info);
    
public:
    UFUNCTION(BlueprintPure)
    void GetCharacterHandleSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* FindSlotByHandle(UPalIndividualCharacterHandle* Handle) const;
    
};

