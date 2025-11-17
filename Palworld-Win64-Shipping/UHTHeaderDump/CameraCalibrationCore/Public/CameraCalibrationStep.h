#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraCalibrationStep.generated.h"

UCLASS(Abstract)
class CAMERACALIBRATIONCORE_API UCameraCalibrationStep : public UObject {
    GENERATED_BODY()
public:
    UCameraCalibrationStep();

};

