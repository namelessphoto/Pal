#pragma once
#include "CoreMinimal.h"
#include "EHoudiniOutputType.generated.h"

UENUM()
    Invalid,
    Mesh,
    Instancer,
    Landscape,
    Curve,
    Skeletal,
    GeometryCollection,
    DataTable,
    LandscapeSpline,
    AnimSequence,
};

