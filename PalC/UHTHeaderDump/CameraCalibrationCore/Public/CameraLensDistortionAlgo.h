#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraLensDistortionAlgo.generated.h"

UCLASS(Abstract)
class CAMERACALIBRATIONCORE_API UCameraLensDistortionAlgo : public UObject {
    GENERATED_BODY()
public:
    UCameraLensDistortionAlgo();

};

