#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PatternTool_RotationSettings.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UPatternTool_RotationSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bInterpolate;
    
    UPROPERTY()
    bool bJitter;
    
    UPROPERTY(EditAnywhere)
    FRotator StartRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator EndRotation;
    
    UPROPERTY()
    FRotator RotationJitterRange;
    
    UPatternTool_RotationSettings();

};

