#pragma once
#include "CoreMinimal.h"
#include "PalCellCoord.h"
#include "PalStaticMeshImposterChunkInfo.h"
#include "PalStaticMeshImposterChunkMap.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticMeshImposterChunkMap {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalCellCoord, FPalStaticMeshImposterChunkInfo> ChunkMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalCellCoord> PlayerNearCellCoords;
    
    PAL_API FPalStaticMeshImposterChunkMap();
};

