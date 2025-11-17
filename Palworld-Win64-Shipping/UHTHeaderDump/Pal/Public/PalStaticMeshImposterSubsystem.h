#pragma once
#include "CoreMinimal.h"
#include "PalStaticMeshImposterChunkMap.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalStaticMeshImposterSubsystem.generated.h"

class APalStaticMeshImposterChunk;

UCLASS()
class PAL_API UPalStaticMeshImposterSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalStaticMeshImposterChunk> ChunkClass;
    
    UPROPERTY(EditDefaultsOnly)
    float ChunkGridSize;
    
private:
    UPROPERTY(Transient)
    TMap<UClass*, FPalStaticMeshImposterChunkMap> ChunkMapByClass;
    
public:
    UPalStaticMeshImposterSubsystem();

};

