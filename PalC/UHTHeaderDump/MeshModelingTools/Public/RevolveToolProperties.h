#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERevolvePropertiesCapFillMode.h"
#include "RevolveProperties.h"
#include "RevolveToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API URevolveToolProperties : public URevolveProperties {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ERevolvePropertiesCapFillMode CapFillMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bClosePathToAxis;
    
    UPROPERTY(EditAnywhere)
    FVector DrawPlaneOrigin;
    
    UPROPERTY(EditAnywhere)
    FRotator DrawPlaneOrientation;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSnapping;
    
    UPROPERTY()
    bool bAllowedToEditDrawPlane;
    
    URevolveToolProperties();

};

