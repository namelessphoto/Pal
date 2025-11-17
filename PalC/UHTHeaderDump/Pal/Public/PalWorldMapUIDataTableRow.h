#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalWorldMapUIRegionData.h"
#include "PalWorldMapUIDataTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalWorldMapUIDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D minMapTextureBlockSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D mapBlockNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector landScapeRealPositionMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector landScapeRealPositionMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, FPalWorldMapUIRegionData> textureDataMap;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> DefaultMaskTexture;
    
    PAL_API FPalWorldMapUIDataTableRow();
};

