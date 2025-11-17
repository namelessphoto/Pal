#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemContainerSlotAttribute.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterItemContainerAttribute.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterItemContainerAttribute : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<EPalMapObjectItemContainerSlotAttribute> AllSlotAttribute;
    
    UPalMapObjectModelInitializeExtraParameterItemContainerAttribute();

};

