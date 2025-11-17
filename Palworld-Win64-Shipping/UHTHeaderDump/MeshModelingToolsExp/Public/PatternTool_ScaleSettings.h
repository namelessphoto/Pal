#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PatternTool_ScaleSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool_ScaleSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUniform;
    
    UPROPERTY(EditAnywhere)
    bool bInterpolate;
    
    UPROPERTY()
    bool bJitter;
    
    UPROPERTY(EditAnywhere)
    FVector StartScale;
    
    UPROPERTY(EditAnywhere)
    FVector EndScale;
    
    UPROPERTY()
    float ScaleJitterRange;
    
    UPROPERTY()
    FVector ScaleJitterRangeNonUniform;
    
    UPatternTool_ScaleSettings();

};

