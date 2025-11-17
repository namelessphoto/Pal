#pragma once
#include "CoreMinimal.h"
#include "HoudiniLandscapeTargetLayerOutput.h"
#include "HoudiniLandscapeSplineTargetLayerOutput.generated.h"

class ULandscapeSplineSegment;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeSplineTargetLayerOutput : public UHoudiniLandscapeTargetLayerOutput {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName AfterEditLayer;
    
    UPROPERTY()
    TArray<ULandscapeSplineSegment*> Segments;
    
    UHoudiniLandscapeSplineTargetLayerOutput();

};

