#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterInitialItem.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterInitialItem : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalItemAndNum> ItemInfos;
    
    UPalMapObjectModelInitializeExtraParameterInitialItem();

};

