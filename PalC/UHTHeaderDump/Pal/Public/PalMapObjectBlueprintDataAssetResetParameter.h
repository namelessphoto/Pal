#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectBlueprintDataAssetResetParameter.generated.h"

class UPalTextWidgetComponent;

USTRUCT(BlueprintType)
struct FPalMapObjectBlueprintDataAssetResetParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UPalTextWidgetComponent> TextWidgetClass;
    
    PAL_API FPalMapObjectBlueprintDataAssetResetParameter();
};

