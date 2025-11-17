#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseVoxelTool -FallbackName=BaseVoxelTool
#include "VoxelMorphologyMeshesTool.generated.h"

class UVoxelMorphologyMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVoxelMorphologyMeshesTool : public UBaseVoxelTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UVoxelMorphologyMeshesToolProperties* MorphologyProperties;
    
public:
    UVoxelMorphologyMeshesTool();

};

