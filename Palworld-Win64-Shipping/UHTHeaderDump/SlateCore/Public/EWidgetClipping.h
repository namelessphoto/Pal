#pragma once
#include "CoreMinimal.h"
#include "EWidgetClipping.generated.h"

UENUM()
    Inherit,
    ClipToBounds,
    ClipToBoundsWithoutIntersecting,
    ClipToBoundsAlways,
    OnDemand,
};

