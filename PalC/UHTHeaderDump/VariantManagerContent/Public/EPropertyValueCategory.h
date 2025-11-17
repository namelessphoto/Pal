#pragma once
#include "CoreMinimal.h"
#include "EPropertyValueCategory.generated.h"

UENUM()
    Undefined,
    Generic,
    RelativeLocation,
    RelativeRotation = 4,
    RelativeScale3D = 8,
    Visibility = 16,
    Material = 32,
    Color = 64,
    Option = 128,
};

