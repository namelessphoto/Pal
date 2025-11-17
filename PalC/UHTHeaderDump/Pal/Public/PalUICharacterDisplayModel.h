#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalInstanceID.h"
#include "PalUICharacterDisplayModel.generated.h"

class UPalIndividualCharacterSlot;
class UPalUICharacterDisplayModel;

UCLASS(BlueprintType)
class UPalUICharacterDisplayModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateDelegate, UPalUICharacterDisplayModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateDelegate OnUpdateDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalIndividualCharacterSlot*> DisplaySlots;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalInstanceID> NotSelectableIndividualIds;
    
public:
    UPalUICharacterDisplayModel();

    UFUNCTION(BlueprintPure)
    bool IsSelectable(const int32 DisplayIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetDisplaySlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
};

