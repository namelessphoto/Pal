#pragma once
#include "CoreMinimal.h"
#include "EInputDevices.generated.h"

UENUM()
    None,
    Keyboard,
    Mouse,
    Gamepad = 4,
    OculusTouch = 8,
    HTCViveWands = 16,
    AnySpatialDevice = 24,
    TabletFingers = 1024,
};

