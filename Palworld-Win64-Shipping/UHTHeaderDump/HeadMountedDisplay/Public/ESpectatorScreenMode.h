#pragma once
#include "CoreMinimal.h"
#include "ESpectatorScreenMode.generated.h"

UENUM()
    Disabled,
    SingleEyeLetterboxed,
    Undistorted,
    Distorted,
    SingleEye,
    SingleEyeCroppedToFill,
    Texture,
    TexturePlusEye,
};

