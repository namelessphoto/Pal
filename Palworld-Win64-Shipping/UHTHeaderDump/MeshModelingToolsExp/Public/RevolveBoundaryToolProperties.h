#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=ERevolvePropertiesCapFillMode -FallbackName=ERevolvePropertiesCapFillMode
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=RevolveProperties -FallbackName=RevolveProperties
#include "RevolveBoundaryToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URevolveBoundaryToolProperties : public URevolveProperties {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ERevolvePropertiesCapFillMode CapFillMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bDisplayInputMesh;
    
    UPROPERTY(EditAnywhere)
    FVector AxisOrigin;
    
    UPROPERTY(EditAnywhere)
    FVector2D AxisOrientation;
    
    URevolveBoundaryToolProperties();

};

