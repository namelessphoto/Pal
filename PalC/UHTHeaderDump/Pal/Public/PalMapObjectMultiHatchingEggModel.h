#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectHatchingEggModelBase.h"
#include "PalMapObjectMultiHatchingEggModel.generated.h"

UCLASS()
class PAL_API UPalMapObjectMultiHatchingEggModel : public UPalMapObjectHatchingEggModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectMultiHatchingEggModel();

    UFUNCTION(BlueprintCallable)
    void TryFillIncubator();
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetPalEggSlotIndexArrayByAddOrder();
    
    UFUNCTION(BlueprintPure)
    TArray<bool> GetHatchedStateArray() const;
    
};

