#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPatternToolAxisSpacingMode.h"
#include "PatternTool_GridSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool_GridSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPatternToolAxisSpacingMode SpacingX;
    
    UPROPERTY(EditAnywhere)
    int32 CountX;
    
    UPROPERTY(EditAnywhere)
    double StepSizeX;
    
    UPROPERTY(EditAnywhere)
    double ExtentX;
    
    UPROPERTY(EditAnywhere)
    bool bCenteredX;
    
    UPROPERTY(EditAnywhere)
    EPatternToolAxisSpacingMode SpacingY;
    
    UPROPERTY(EditAnywhere)
    int32 CountY;
    
    UPROPERTY(EditAnywhere)
    double StepSizeY;
    
    UPROPERTY(EditAnywhere)
    double ExtentY;
    
    UPROPERTY(EditAnywhere)
    bool bCenteredY;
    
    UPatternTool_GridSettings();

};

