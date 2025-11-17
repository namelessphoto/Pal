#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "CutMeshWithMeshToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTryFixHoles;
    
    UPROPERTY(EditAnywhere)
    bool bTryCollapseEdges;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float WindingThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bShowNewBoundaries;
    
    UPROPERTY(EditAnywhere)
    bool bUseFirstMeshMaterials;
    
    UCutMeshWithMeshToolProperties();

};

