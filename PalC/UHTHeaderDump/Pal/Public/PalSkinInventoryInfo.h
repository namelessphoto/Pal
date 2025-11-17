#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PocketpairUser -ObjectName=PocketpairPlatformID -FallbackName=PocketpairPlatformID
#include "PalSkinInGameItemData.h"
#include "PalSkinPlatformItemData.h"
#include "PalSkinInventoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSkinInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalSkinInGameItemData> InGameData;
    
    UPROPERTY()
    TArray<FPalSkinPlatformItemData> PlatformData;
    
    UPROPERTY(Transient)
    FPocketpairPlatformID PlatformID;
    
    UPROPERTY(Transient)
    bool bInitialize;
    
    PAL_API FPalSkinInventoryInfo();
};

