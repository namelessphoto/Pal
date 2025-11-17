#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshAttributeChangeFlags.generated.h"

UENUM()
    Unknown,
    MeshTopology,
    VertexPositions,
    NormalsTangents = 4,
    VertexColors = 8,
    UVs = 16,
    TriangleGroups = 32,
};

