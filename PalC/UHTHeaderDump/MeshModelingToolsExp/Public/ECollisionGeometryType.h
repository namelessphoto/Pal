#pragma once
#include "CoreMinimal.h"
#include "ECollisionGeometryType.generated.h"

UENUM()
    KeepExisting,
    AlignedBoxes,
    OrientedBoxes,
    MinimalSpheres,
    Capsules,
    ConvexHulls,
    SweptHulls,
    LevelSets,
    MinVolume = 10,
    None,
};

