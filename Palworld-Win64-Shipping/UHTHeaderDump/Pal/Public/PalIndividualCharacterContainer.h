#pragma once
#include "CoreMinimal.h"
#include "PalContainerBase.h"
#include "PalIndividualCharacterContainer.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;

UCLASS()
class UPalIndividualCharacterContainer : public UPalContainerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentsDelegate, UPalIndividualCharacterContainer*, Container);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContentsDelegate OnUpdateContentsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContentsDelegate OnUpdateSlotsDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_Slots)
    TArray<UPalIndividualCharacterSlot*> SlotArray;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    bool bCanSetFavorite;
    
public:
    UPalIndividualCharacterContainer();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_Slots();
    
public:
    UFUNCTION(BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetSlots() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* Get(const int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* FindEmptySlot() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* FindByHandle(UPalIndividualCharacterHandle* Handle) const;
    
};

