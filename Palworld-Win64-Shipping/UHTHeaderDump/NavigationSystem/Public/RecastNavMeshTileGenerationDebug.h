#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "RecastNavMeshTileGenerationDebug.generated.h"

USTRUCT(BlueprintType)
struct NAVIGATIONSYSTEM_API FRecastNavMeshTileGenerationDebug {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    uint8 bEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    FIntVector TileCoordinate;
    
    UPROPERTY(EditAnywhere)
    uint8 bHeightfieldSolidFromRasterization: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHeightfieldSolidPostInclusionBoundsFiltering: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHeightfieldSolidPostHeightFiltering: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCompactHeightfield: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCompactHeightfieldEroded: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCompactHeightfieldRegions: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCompactHeightfieldDistances: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileCacheLayerAreas: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileCacheLayerRegions: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileCacheContours: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileCachePolyMesh: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTileCacheDetailMesh: 1;
    
    FRecastNavMeshTileGenerationDebug();
};

