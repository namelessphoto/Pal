#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PalWorldMapUIRegionData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalWorldMapUIRegionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D blockSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D gridPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName regionNameMsgId;
    
    PAL_API FPalWorldMapUIRegionData();
};

