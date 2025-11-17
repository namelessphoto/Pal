#pragma once
#include "CoreMinimal.h"
#include "EPalLogContentToneType.h"
#include "PalStaticItemIdAndNum.h"
#include "Templates/SubclassOf.h"
#include "PalLogAdditionalData.generated.h"

class UPalLogWidgetBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPalLogAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<TSoftObjectPtr<UTexture2D>> softTextures;
    
    UPROPERTY(BlueprintReadWrite)
    EPalLogContentToneType logToneType;
    
    UPROPERTY(BlueprintReadWrite)
    FName DefaultFontStyleName;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UPalLogWidgetBase> overrideWidgetClass;
    
    UPROPERTY(BlueprintReadWrite)
    FPalStaticItemIdAndNum ItemIDAndNum;
    
    PAL_API FPalLogAdditionalData();
};

