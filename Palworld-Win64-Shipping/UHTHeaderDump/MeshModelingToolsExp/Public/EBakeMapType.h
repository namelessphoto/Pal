#pragma once
#include "CoreMinimal.h"
#include "EBakeMapType.generated.h"

UENUM()
    None,
    TangentSpaceNormal,
    ObjectSpaceNormal,
    FaceNormal = 4,
    BentNormal = 8,
    Position = 16,
    Curvature = 32,
    AmbientOcclusion = 64,
    Texture = 128,
    MultiTexture = 256,
    VertexColor = 512,
    MaterialID = 1024,
    All = 2047,
};

