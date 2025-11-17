#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterItem.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterItem : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalItemAndNum> ItemInfos;
    
    UPalMapObjectModelInitializeExtraParameterItem();

};

