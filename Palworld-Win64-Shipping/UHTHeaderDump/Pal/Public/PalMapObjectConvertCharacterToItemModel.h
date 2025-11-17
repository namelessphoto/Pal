#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectConvertCharacterToItemProcessItem.h"
#include "PalMapObjectConvertCharacterToItemModel.generated.h"

class UPalIndividualCharacterSlotsObserver;
class UPalMapObjectConvertCharacterToItemModel;

UCLASS()
class PAL_API UPalMapObjectConvertCharacterToItemModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectConvertCharacterToItemModel*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnProceedConvertProcessDelegate;
    
private:
    UPROPERTY()
    UPalIndividualCharacterSlotsObserver* CharacterSlotsObserver;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectConvertCharacterToItemProcessItem> ConvertProcessArray;
    
public:
    UPalMapObjectConvertCharacterToItemModel();

private:
    UFUNCTION()
    void OnUpdateCharacterContainer_ServerInternal();
    
};

