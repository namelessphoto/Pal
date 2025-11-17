#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraNodalOffsetAlgo.generated.h"

UCLASS(Abstract)
class CAMERACALIBRATIONCORE_API UCameraNodalOffsetAlgo : public UObject {
    GENERATED_BODY()
public:
    UCameraNodalOffsetAlgo();

};

