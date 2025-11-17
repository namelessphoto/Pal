#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalLocationUIData.generated.h"

class UPalUICompassIconBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLocationUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalUICompassIconBase> compassIconWidget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float displayLength;
    
    PAL_API FPalLocationUIData();
};

