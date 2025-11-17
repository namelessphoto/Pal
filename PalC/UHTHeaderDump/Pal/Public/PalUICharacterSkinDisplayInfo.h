#pragma once
#include "CoreMinimal.h"
#include "PalUICharacterSkinDisplayInfo.generated.h"

class UPalSkinDataBase;

USTRUCT(BlueprintType)
struct FPalUICharacterSkinDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<UPalSkinDataBase*> SkinDataArray;
    
    PAL_API FPalUICharacterSkinDisplayInfo();
};

