#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseVoxelTool -FallbackName=BaseVoxelTool
#include "VoxelBlendMeshesTool.generated.h"

class UVoxelBlendMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVoxelBlendMeshesTool : public UBaseVoxelTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UVoxelBlendMeshesToolProperties* BlendProperties;
    
public:
    UVoxelBlendMeshesTool();

};

