#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "VoxelProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UVoxelProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 VoxelCount;
    
    UPROPERTY(EditAnywhere)
    bool bAutoSimplify;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveInternalSurfaces;
    
    UPROPERTY(EditAnywhere)
    double SimplifyMaxErrorFactor;
    
    UPROPERTY(EditAnywhere)
    double CubeRootMinComponentVolume;
    
    UVoxelProperties();

};

