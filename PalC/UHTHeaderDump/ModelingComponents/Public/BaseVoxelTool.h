#pragma once
#include "CoreMinimal.h"
#include "BaseCreateFromSelectedTool.h"
#include "BaseVoxelTool.generated.h"

class UVoxelProperties;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UBaseVoxelTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UVoxelProperties* VoxProperties;
    
public:
    UBaseVoxelTool();

};

