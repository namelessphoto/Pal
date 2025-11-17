#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPatternToolShape.h"
#include "EPatternToolSingleAxis.h"
#include "EPatternToolSinglePlane.h"
#include "PatternToolSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternToolSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EPatternToolShape Shape;
    
    UPROPERTY(EditAnywhere)
    EPatternToolSingleAxis SingleAxis;
    
    UPROPERTY(EditAnywhere)
    EPatternToolSinglePlane SinglePlane;
    
    UPROPERTY(EditAnywhere)
    bool bHideSources;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPatternToolSettings();

};

