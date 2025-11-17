#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "VoxelSolidifyMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double WindingThreshold;
    
    UPROPERTY(EditAnywhere)
    double ExtendBounds;
    
    UPROPERTY(EditAnywhere)
    int32 SurfaceSearchSteps;
    
    UPROPERTY(EditAnywhere)
    bool bSolidAtBoundaries;
    
    UPROPERTY()
    bool bApplyThickenShells;
    
    UPROPERTY(EditAnywhere)
    double ThickenShells;
    
    UVoxelSolidifyMeshesToolProperties();

};

