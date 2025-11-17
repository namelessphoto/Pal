#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMeshFacesColorMode.h"
#include "EMeshSelectionToolPrimaryMode.h"
#include "MeshSelectionToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshSelectionToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMeshSelectionToolPrimaryMode SelectionMode;
    
    UPROPERTY(EditAnywhere)
    float AngleTolerance;
    
    UPROPERTY(EditAnywhere)
    bool bHitBackFaces;
    
    UPROPERTY(EditAnywhere)
    bool bShowPoints;
    
    UPROPERTY(EditAnywhere)
    EMeshFacesColorMode FaceColorMode;
    
    UMeshSelectionToolProperties();

};

