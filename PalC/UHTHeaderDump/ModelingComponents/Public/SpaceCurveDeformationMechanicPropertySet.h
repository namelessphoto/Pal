#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESpaceCurveControlPointFalloffType.h"
#include "ESpaceCurveControlPointOriginMode.h"
#include "ESpaceCurveControlPointTransformMode.h"
#include "SpaceCurveDeformationMechanicPropertySet.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpaceCurveControlPointTransformMode TransformMode;
    
    UPROPERTY(EditAnywhere)
    ESpaceCurveControlPointOriginMode TransformOrigin;
    
    UPROPERTY(EditAnywhere)
    float Softness;
    
    UPROPERTY(EditAnywhere)
    ESpaceCurveControlPointFalloffType SoftFalloff;
    
    USpaceCurveDeformationMechanicPropertySet();

};

