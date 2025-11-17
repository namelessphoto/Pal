#pragma once
#include "CoreMinimal.h"
#include "SphericalPoseReaderDebugSettings.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FSphericalPoseReaderDebugSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDraw2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLocalAxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DebugSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DebugThickness;
    
    FSphericalPoseReaderDebugSettings();
};

