#pragma once
#include "CoreMinimal.h"
#include "PalStaticMeshImposterChunkInfo.generated.h"

class APalStaticMeshImposterChunk;

USTRUCT()
struct FPalStaticMeshImposterChunkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalStaticMeshImposterChunk* Chunk;
    
    PAL_API FPalStaticMeshImposterChunkInfo();
};

