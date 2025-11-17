#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "EPalCharacterMovementCustomMode.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "PalDataTableRowName_SoundID.h"
#include "PalDeadInfo.h"
#include "PalGliderPalInfo.h"
#include "PalSoundOptions.h"
#include "Templates/SubclassOf.h"
#include "PalGliderComponent.generated.h"

class APalCharacter;
class APalGliderObject;
class UPalCharacterMovementComponent;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalItemContainer;
class UPalItemSlot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalGliderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartGliding);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndGliding);
    
    UPROPERTY(BlueprintAssignable)
    FOnStartGliding OnStartGlidingDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndGliding OnEndGlidingDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalGliderPalInfo> GliderPalInfos;
    
private:
    UPROPERTY(Transient)
    APalGliderObject* CurrentGlider;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentGliderPalID)
    FName CurrentGliderPalID;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentGliderSoftClass)
    TSoftClassPtr<APalGliderObject> CurrentGliderSoftClass;
    
    UPROPERTY(Transient)
    TSubclassOf<APalGliderObject> CurrentGliderClass;
    
    UPROPERTY(Transient)
    UPalIndividualCharacterParameter* CurrentGliderIndividualParameter;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsGliding)
    bool bIsGliding;
    
public:
    UPalGliderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* TryGetGliderIndividualHandleFromOtomoHolder() const;
    
    UFUNCTION(BlueprintCallable)
    void StopGliderSound(const FPalDataTableRowName_SoundID& ID);
    
private:
    UFUNCTION(Reliable, Server)
    void StartGliding_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGliding();
    
private:
    UFUNCTION(Reliable, Server)
    void SetCurrentGliderSoftClass_ToServer(const TSoftClassPtr<APalGliderObject>& gliderSoftClass);
    
    UFUNCTION(Reliable, Server)
    void SetCurrentGliderPalID_ToServer(const FName& PalId);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RequestCheckAndUpdateCurrentGlider_ToAll();
    
    UFUNCTION(BlueprintCallable)
    void PlayGliderSound(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Option);
    
private:
    UFUNCTION()
    void OnUpdateOtomoHolderSlot(int32 SlotIndex, UPalIndividualCharacterHandle* LastHandle);
    
    UFUNCTION()
    void OnUpdateOtomoHolderInitialized(APalCharacter* Character);
    
    UFUNCTION()
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnUpdateIndividualActor(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION()
    void OnUpdateEquipmentSlot(UPalItemSlot* itemSlot, EPalPlayerEquipItemSlotType slotType);
    
    UFUNCTION()
    void OnUpdateCharacterRank(const int32 NowRank, const int32 OldRank);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartGliding();
    
private:
    UFUNCTION()
    void OnRevivedIndividual(UPalIndividualCharacterParameter* InParameter);
    
    UFUNCTION()
    void OnRep_IsGliding();
    
    UFUNCTION()
    void OnRep_CurrentGliderSoftClass();
    
    UFUNCTION()
    void OnRep_CurrentGliderPalID();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeGlider();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndGliding();
    
private:
    UFUNCTION()
    void OnDeadGliderPal(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnCompleteOwnerInitialize();
    
    UFUNCTION()
    void OnChangeMovementMode(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeGliderVisibility(bool bIsVisibility);
    
    UFUNCTION(BlueprintPure)
    bool IsGliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipGlider() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGliderPal() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetAllGliderPalNames() const;
    
private:
    UFUNCTION(Reliable, Server)
    void EndGliding_ToServer();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndGliding();
    
    UFUNCTION(BlueprintPure)
    bool CanGliding() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEndGliding() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelGliding();
    
};

