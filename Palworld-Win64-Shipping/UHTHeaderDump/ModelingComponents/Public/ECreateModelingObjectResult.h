#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.generated.h"

UENUM()
    Ok,
    Cancelled,
    Failed_Unknown,
    Failed_NoAPIFound,
    Failed_InvalidWorld,
    Failed_InvalidMesh,
    Failed_InvalidTexture,
    Failed_AssetCreationFailed,
    Failed_ActorCreationFailed,
};

