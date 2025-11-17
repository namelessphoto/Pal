#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniLandscapeSplineControlPointData.h"
#include "HoudiniLandscapeSplineSegmentData.h"
#include "HoudiniInputLandscapeSplinesComponent.generated.h"

class ULandscapeSplineControlPoint;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscapeSplinesComponent : public UHoudiniInputSceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FHoudiniLandscapeSplineControlPointData> CachedControlPoints;
    
    UPROPERTY()
    TArray<FHoudiniLandscapeSplineSegmentData> CachedSegments;
    
    UPROPERTY()
    TMap<TSoftObjectPtr<ULandscapeSplineControlPoint>, int32> ControlPointIdMap;
    
    UPROPERTY()
    int32 NextControlPointId;
    
public:
    UHoudiniInputLandscapeSplinesComponent();

};

