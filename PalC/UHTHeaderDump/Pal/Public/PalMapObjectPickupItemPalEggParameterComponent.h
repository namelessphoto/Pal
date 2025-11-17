#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectPickupItemPalEggData.h"
#include "PalMapObjectPickupItemParameterComponent.h"
#include "PalMapObjectPickupItemPalEggParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemPalEggParameterComponent : public UPalMapObjectPickupItemParameterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalMapObjectPickupItemPalEggData PalEggData;
    
    UPalMapObjectPickupItemPalEggParameterComponent(const FObjectInitializer& ObjectInitializer);

};

