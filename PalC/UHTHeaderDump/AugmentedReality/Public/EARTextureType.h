#pragma once
#include "CoreMinimal.h"
#include "EARTextureType.generated.h"

UENUM()
    Unknown,
    CameraImage,
    CameraDepth,
    EnvironmentCapture,
    PersonSegmentationImage,
    PersonSegmentationDepth,
    SceneDepthMap,
    SceneDepthConfidenceMap,
};

