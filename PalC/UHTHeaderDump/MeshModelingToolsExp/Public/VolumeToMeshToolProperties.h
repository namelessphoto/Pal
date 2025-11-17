#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "VolumeToMeshToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UVolumeToMeshToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bWeldEdges;
    
    UPROPERTY(EditAnywhere)
    bool bAutoRepair;
    
    UPROPERTY(EditAnywhere)
    bool bOptimizeMesh;
    
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UVolumeToMeshToolProperties();

};

