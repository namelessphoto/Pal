#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseVoxelTool -FallbackName=BaseVoxelTool
#include "VoxelSolidifyMeshesTool.generated.h"

class UVoxelSolidifyMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVoxelSolidifyMeshesTool : public UBaseVoxelTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UVoxelSolidifyMeshesToolProperties* SolidifyProperties;
    
public:
    UVoxelSolidifyMeshesTool();

};

