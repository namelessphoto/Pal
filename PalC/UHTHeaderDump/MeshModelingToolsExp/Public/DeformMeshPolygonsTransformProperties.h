#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EGroupTopologyDeformationStrategy.h"
#include "EQuickTransformerMode.h"
#include "EWeightScheme.h"
#include "DeformMeshPolygonsTransformProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGroupTopologyDeformationStrategy DeformationStrategy;
    
    UPROPERTY(EditAnywhere)
    EQuickTransformerMode TransformMode;
    
    UPROPERTY(EditAnywhere)
    bool bSelectFaces;
    
    UPROPERTY(EditAnywhere)
    bool bSelectEdges;
    
    UPROPERTY(EditAnywhere)
    bool bSelectVertices;
    
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UPROPERTY()
    EWeightScheme SelectedWeightScheme;
    
    UPROPERTY()
    double HandleWeight;
    
    UPROPERTY()
    bool bPostFixHandles;
    
    UDeformMeshPolygonsTransformProperties();

};

