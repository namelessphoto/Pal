#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
#include "LensFileEvaluationInputs.generated.h"

USTRUCT(BlueprintType)
struct FLensFileEvaluationInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Interp, VisibleAnywhere)
    float Focus;
    
    UPROPERTY(BlueprintReadOnly, Interp, VisibleAnywhere)
    float Iris;
    
    UPROPERTY(BlueprintReadOnly, Interp, VisibleAnywhere)
    float Zoom;
    
    UPROPERTY(BlueprintReadOnly, Interp, VisibleAnywhere)
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsValid;
    
    CAMERACALIBRATIONCORE_API FLensFileEvaluationInputs();
};

