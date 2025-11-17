#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FlagContainer.h"
#include "PalInstanceID.h"
#include "PalPlayerDataPalStorage.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;
class UPalIndividualCharacterSlotsObserver;
class UPalPlayerDataPalDimensionStorage;

UCLASS(BlueprintType)
class UPalPlayerDataPalStorage : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 PageNum;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 SlotNumInPage;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TargetContainer)
    UPalIndividualCharacterContainer* TargetContainer;
    
    UPROPERTY()
    UPalIndividualCharacterSlotsObserver* SlotObserver;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
    UPROPERTY(Transient)
    int32 SyncPageIndex;
    
    UPROPERTY(Transient)
    bool bIsForceSyncAllSlot;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, FFlagContainer> RequiredReplicatesFlagMapInServer;
    
    UPROPERTY(Replicated, Transient)
    UPalPlayerDataPalDimensionStorage* PalDimensionStorage;
    
public:
    UPalPlayerDataPalStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateCharacterContainer_InServer();
    
protected:
    UFUNCTION()
    void OnRep_TargetContainer();
    
public:
    UFUNCTION(BlueprintPure)
    void GetSlotsInPage(const int32 pageIndex, TArray<UPalIndividualCharacterSlot*>& Slots) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetSlotBySlotIndex(const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetSlot(const int32 pageIndex, const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPageNum() const;
    
    UFUNCTION(BlueprintPure)
    UPalPlayerDataPalDimensionStorage* GetDimensionStorage() const;
    
};

