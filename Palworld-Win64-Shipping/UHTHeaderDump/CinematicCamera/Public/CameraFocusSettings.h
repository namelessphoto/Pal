#pragma once
#include "CoreMinimal.h"
#include "CameraTrackingFocusSettings.h"
#include "ECameraFocusMethod.h"
#include "CameraFocusSettings.generated.h"

USTRUCT(BlueprintType)
struct FCameraFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECameraFocusMethod FocusMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ManualFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraTrackingFocusSettings TrackingFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSmoothFocusChanges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusSmoothingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FocusOffset;
    
    CINEMATICCAMERA_API FCameraFocusSettings();
};

