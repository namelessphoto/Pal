#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "SmoothHoleFillProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothHoleFillProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bConstrainToHoleInterior;
    
    UPROPERTY(EditAnywhere)
    int32 RemeshingExteriorRegionWidth;
    
    UPROPERTY(EditAnywhere)
    int32 SmoothingExteriorRegionWidth;
    
    UPROPERTY(EditAnywhere)
    int32 SmoothingInteriorRegionWidth;
    
    UPROPERTY(EditAnywhere)
    float InteriorSmoothness;
    
    UPROPERTY(EditAnywhere)
    double FillDensityScalar;
    
    UPROPERTY(EditAnywhere)
    bool bProjectDuringRemesh;
    
    USmoothHoleFillProperties();

};

