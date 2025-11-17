#pragma once
#include "CoreMinimal.h"
#include "EAudioDeviceChangedState.generated.h"

UENUM()
    Invalid,
    Active,
    Disabled,
    NotPresent,
    Unplugged,
    Count,
};

