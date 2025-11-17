#pragma once
#include "CoreMinimal.h"
#include "PalSkinInGameItemData.generated.h"

USTRUCT()
struct FPalSkinInGameItemData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SkinName;
    
    UPROPERTY()
    int32 Num;
    
    PAL_API FPalSkinInGameItemData();
};

