#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPatternToolAxisSpacingMode.h"
#include "PatternTool_RadialSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool_RadialSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPatternToolAxisSpacingMode SpacingMode;
    
    UPROPERTY(EditAnywhere)
    int32 Count;
    
    UPROPERTY(EditAnywhere)
    double StepSize;
    
    UPROPERTY(EditAnywhere)
    double Radius;
    
    UPROPERTY(EditAnywhere)
    double StartAngle;
    
    UPROPERTY(EditAnywhere)
    double EndAngle;
    
    UPROPERTY(EditAnywhere)
    double AngleShift;
    
    UPROPERTY(EditAnywhere)
    bool bOriented;
    
    UPatternTool_RadialSettings();

};

