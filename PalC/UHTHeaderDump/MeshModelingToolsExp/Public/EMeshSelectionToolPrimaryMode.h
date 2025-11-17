#pragma once
#include "CoreMinimal.h"
#include "EMeshSelectionToolPrimaryMode.generated.h"

UENUM()
    Brush,
    VolumetricBrush,
    AngleFiltered,
    Visible,
    AllConnected,
    AllInGroup,
    ByMaterial,
    ByUVIsland,
    AllWithinAngle,
};

