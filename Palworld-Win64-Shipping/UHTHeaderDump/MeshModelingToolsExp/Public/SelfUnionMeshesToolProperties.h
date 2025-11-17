#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "SelfUnionMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTrimFlaps;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTryFixHoles;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTryCollapseEdges;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float WindingThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bShowNewBoundaryEdges;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyUseFirstMeshMaterials;
    
    USelfUnionMeshesToolProperties();

};

