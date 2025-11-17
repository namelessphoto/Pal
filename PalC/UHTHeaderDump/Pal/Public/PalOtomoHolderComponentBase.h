#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalLogType.h"
#include "EPalOtomoPalOrderType.h"
#include "PalCharacterSlotId.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalInstanceID.h"
#include "PalOtomoHolderComponentBase.generated.h"

class AActor;
class AController;
class APalCharacter;
class APawn;
class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalIndividualCharacterSlot;
class UPalOtomoSpawnCollisionChecker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalOtomoHolderComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateOtomoSlotWithInitializedParameterDelegate, APalCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateOtomoSlotDelegate, int32, SlotIndex, UPalIndividualCharacterHandle*, LastHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOtomoSpawnedDelegate, AController*, HolderController, APalCharacter*, OtomoPal);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCreatedCharacterContainer);
    
    UPROPERTY(BlueprintAssignable)
    FOnCreatedCharacterContainer OnCreatedCharacterContainerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateOtomoSlotDelegate OnUpdateOtomoSlotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateOtomoSlotDelegate OnUpdateOtomoSlotWithActorDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateOtomoSlotWithInitializedParameterDelegate OnUpdateOtomoSlotWithInitializedParameterDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateOtomoSlotWithInitializedParameterDelegate OnUpdateOtomoSlotWithCompletedInitializedParameterDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOtomoSpawnedDelegate OnOtomoSpawnedDelegate;
    
private:
    UPROPERTY(Transient)
    UPalOtomoSpawnCollisionChecker* CollisionChecker;
    
    UPROPERTY(Replicated)
    EPalOtomoPalOrderType OtomoOrder;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CharacterContainer)
    UPalIndividualCharacterContainer* CharacterContainer;
    
    UPROPERTY()
    TArray<UPalIndividualCharacterHandle*> CreatingHandleCache;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDisableDespawnCharacter;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDisableDeadReturnOtomo;
    
    UPROPERTY(BlueprintReadOnly)
    bool bDisableReturnOtomo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bReleaseContainerOnDestory;
    
public:
    UPalOtomoHolderComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryRevivePlayerByPartnerSkill();
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* TryGetSpawnedOtomoHandle() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* TryGetSpawnedOtomo() const;
    
    UFUNCTION(BlueprintPure)
    APawn* TryGetOwnerControlledPawn() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* TryGetOwnerControlledCharacter() const;
    
    UFUNCTION(BlueprintPure)
    APalCharacter* TryGetOtomoActorBySlotIndex(const int32 SlotIndex) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryGetLoadedOtomoData(bool& bLoaded, TMap<FPalInstanceID, FPalIndividualCharacterSaveParameter>& OutParameterMap);
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    APalCharacter* TryGetCurrentSelectPalActor();
    
protected:
    UFUNCTION(BlueprintPure)
    bool TryGetContainer(UPalIndividualCharacterContainer*& Container) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryFixAssignNearestWorkSelectedOtomo(const AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void Tmp_EmptySlot(const FPalCharacterSlotId& SlotId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnOtomoByLoad(int32 SlotIndex);
    
private:
    UFUNCTION(Reliable, Server)
    void SetSelectOtomoID_ToServer(int32 ID, int32 Index);
    
    UFUNCTION(NetMulticast, Reliable)
    void SetSelectOtomoID_ToALL(int32 ID, int32 Index);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelectOtomoID_Internal(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectOtomoID(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetOtomoOrder_ToServer(EPalOtomoPalOrderType OrderType);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetInteractComponent(AActor* SpawnPal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableReturnOtomo(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableDeadReturnOtomo(bool bDisable);
    
private:
    UFUNCTION()
    void OnUpdateSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle);
    
    UFUNCTION()
    void OnUpdateIndividualActor(UPalIndividualCharacterHandle* LastHandle);
    
protected:
    UFUNCTION()
    void OnUpdateFriendshipRank(UPalIndividualCharacterParameter* IndividualParameter, const int32 NewFriendshipRank, const int32 OldRank, bool bFirstRankup);
    
    UFUNCTION()
    void OnSpawnOtomoCallback_ServerInternal(FPalInstanceID ID);
    
private:
    UFUNCTION()
    void OnSpawnDebugOtomoCallback_ServerInternal(FPalInstanceID ID);
    
    UFUNCTION()
    void OnReplicated_CharacterContainer_AllSlots(UPalIndividualCharacterContainer* Container);
    
    UFUNCTION()
    void OnRep_CharacterContainer();
    
    UFUNCTION()
    void OnInitializedCharacter(APalCharacter* Character);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnCreatedCharacterContainer();
    
private:
    UFUNCTION()
    void OnCompletedAllCharacterInitialized(APalCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeOtomoActive(APalCharacter* Otomo, bool IsActive);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintPure=false)
    void LostOtomoByID_ToClient(FPalInstanceID ID) const;
    
    UFUNCTION()
    void LostOtomoByID(FPalInstanceID ID) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsValidCurrentSelectPalActor();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsRidingBySpawnSlotID();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsRidingBySelectSlotID();
    
    UFUNCTION(BlueprintPure)
    bool IsFullMember() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDeadSelectedOtomo();
    
    UFUNCTION(BlueprintPure)
    bool IsCreatedOtomoContainer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsControlledByPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsALLEmpty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllDeadOtomo();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsActivatedSelectOtomo();
    
    UFUNCTION(BlueprintCallable)
    void Initialize_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
private:
    UFUNCTION(Reliable, Server)
    void IncrementSelectOtomoID_ToServer(int32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void IncrementSelectOtomoID_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void IncrementSelectOtomoID_Internal();
    
    UFUNCTION(BlueprintCallable)
    void IncrementSelectOtomoID();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InactiveOtomoByHandle_PreProcess(UPalIndividualCharacterHandle* Handle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactivateCurrentOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InactivateAllOtomo();
    
protected:
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform_SpawnPalNearTrainer();
    
public:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetSpawnedOtomoID() const;
    
    UFUNCTION(BlueprintPure)
    void GetSlots(TArray<UPalIndividualCharacterSlot*>& Slots) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotIndexByIndividualHandle(const UPalIndividualCharacterHandle* IndividualHandle) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetSelectedOtomoID() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetPreviousOtomoSlotID();
    
    UFUNCTION(BlueprintPure)
    EPalOtomoPalOrderType GetOtomoOrder() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetOtomoIndividualHandle(const int32 SlotIndex) const;
    
protected:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetOtomoIndividualCharacterSlot_Internal(const int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetOtomoIndividualCharacterSlot(const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOtomoCount() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetNextOtomoSlotID();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetMaxOtomoNum() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    APalCharacter* GetEnemyWhenOtomoThrow(FVector OtomoAppearedLocation);
    
public:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetEmptySlot() const;
    
    UFUNCTION(BlueprintPure)
    void GetAllIndividualHandle(TArray<UPalIndividualCharacterHandle*>& OutArray) const;
    
private:
    UFUNCTION(Reliable, Server)
    void DecrementSelectOtomoID_ToServer(int32 ID);
    
    UFUNCTION(NetMulticast, Reliable)
    void DecrementSelectOtomoID_ToALL(int32 ID);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void DecrementSelectOtomoID_Internal();
    
    UFUNCTION(BlueprintCallable)
    void DecrementSelectOtomoID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CoopCallCommand();
    
    UFUNCTION(BlueprintCallable)
    void CompleteInactiveCurrentOtomo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallCancelCommand();
    
    UFUNCTION(BlueprintCallable)
    bool AddOtomoHandleToFreeSlot(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddLogOtomoPartnerSkill_Waza_ToClient(AActor* Otomo, EPalLogType PalLogType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddLogOtomoPartnerSkill_ToClient(AActor* Otomo, EPalLogType PalLogType, int32 Value, bool AddSkillName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddLogOtomoPartnerSkill_Text_ToClient(AActor* Otomo, FName TextId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivatePalByHandle(const UPalIndividualCharacterHandle* OtomoHandle, const FVector& Location, const FRotator& Rotation, bool bKeepActigvateOtomoId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ActivateCurrentOtomoNearThePlayer_ToServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ActivateCurrentOtomoNearThePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCurrentOtomoFromBallNative(FTransform ballTransform, AActor* hitTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ActivateCurrentOtomo(FTransform SpawnTransform);
    
};

