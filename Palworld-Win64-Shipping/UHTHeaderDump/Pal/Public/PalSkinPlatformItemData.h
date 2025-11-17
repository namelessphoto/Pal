#pragma once
#include "CoreMinimal.h"
#include "PalSkinPlatformItemData.generated.h"

USTRUCT()
struct FPalSkinPlatformItemData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SkinName;
    
    UPROPERTY(Transient)
    TArray<uint8> PlatformToken;
    
    UPROPERTY(Transient)
    bool bIsValid;
    
    PAL_API FPalSkinPlatformItemData();
};

