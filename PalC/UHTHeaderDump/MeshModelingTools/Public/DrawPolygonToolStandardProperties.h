#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EDrawPolygonDrawMode.h"
#include "EDrawPolygonExtrudeMode.h"
#include "DrawPolygonToolStandardProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NonTransactional)
    EDrawPolygonDrawMode PolygonDrawMode;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bAllowSelfIntersections;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    float FeatureSizeRatio;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    int32 RadialSlices;
    
    UPROPERTY(NonTransactional, VisibleAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    bool bShowGridGizmo;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    EDrawPolygonExtrudeMode ExtrudeMode;
    
    UPROPERTY(EditAnywhere, NonTransactional)
    float ExtrudeHeight;
    
    UDrawPolygonToolStandardProperties();

};

