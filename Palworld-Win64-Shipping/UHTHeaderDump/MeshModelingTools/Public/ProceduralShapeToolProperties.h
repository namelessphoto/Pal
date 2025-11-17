#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMakeMeshPivotLocation.h"
#include "EMakeMeshPlacementType.h"
#include "EMakeMeshPolygroupMode.h"
#include "ProceduralShapeToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UProceduralShapeToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMakeMeshPolygroupMode PolygroupMode;
    
    UPROPERTY(EditAnywhere)
    EMakeMeshPlacementType TargetSurface;
    
    UPROPERTY(EditAnywhere)
    EMakeMeshPivotLocation PivotLocation;
    
    UPROPERTY(EditAnywhere)
    float Rotation;
    
    UPROPERTY(EditAnywhere)
    bool bAlignToNormal;
    
    UPROPERTY(EditAnywhere)
    bool bShowGizmo;
    
    UPROPERTY()
    bool bShowGizmoOptions;
    
    UProceduralShapeToolProperties();

};

