#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectShippingItemModel.generated.h"

UCLASS()
class UPalMapObjectShippingItemModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<int32> ShippingHours;
    
public:
    UPalMapObjectShippingItemModel();

private:
    UFUNCTION()
    void OnChangeTimeHoursInServer();
    
};

