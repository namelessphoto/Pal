#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeCurvatureClampMode.h"
#include "EBakeCurvatureColorMode.h"
#include "EBakeCurvatureTypeMode.h"
#include "BakeCurvatureMapToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EBakeCurvatureTypeMode CurvatureType;
    
    UPROPERTY(EditAnywhere)
    EBakeCurvatureColorMode ColorMapping;
    
    UPROPERTY(EditAnywhere)
    float ColorRangeMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinRangeMultiplier;
    
    UPROPERTY(EditAnywhere)
    EBakeCurvatureClampMode Clamping;
    
    UBakeCurvatureMapToolProperties();

};

