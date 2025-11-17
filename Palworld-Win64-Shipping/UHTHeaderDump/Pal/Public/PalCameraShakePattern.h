#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "PalCameraShakePattern.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPalCameraShakePattern();

};

