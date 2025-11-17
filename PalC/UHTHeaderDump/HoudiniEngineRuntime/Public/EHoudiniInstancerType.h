#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInstancerType.generated.h"

UENUM()
    Invalid,
    ObjectInstancer,
    PackedPrimitive,
    AttributeInstancer,
    OldSchoolAttributeInstancer,
    GeometryCollection,
    SkeletalMesh,
    MotionClip,
};

