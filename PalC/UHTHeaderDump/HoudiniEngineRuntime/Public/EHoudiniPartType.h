#pragma once
#include "CoreMinimal.h"
#include "EHoudiniPartType.generated.h"

UENUM()
    Invalid,
    Mesh,
    Instancer,
    Curve,
    Volume,
    DataTable,
    LandscapeSpline,
    SkeletalMeshShape,
    SkeletalMeshPose,
    MotionClip,
};

