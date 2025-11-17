#pragma once
#include "CoreMinimal.h"
#include "EConvertToPolygonsMode.generated.h"

UENUM()
    FaceNormalDeviation,
    FindPolygons,
    FromUVIslands,
    FromNormalSeams,
    FromConnectedTris,
    FromFurthestPointSampling,
    CopyFromLayer,
};

