#pragma once
#include "CoreMinimal.h"
#include "LiveLinkCameraControllerUpdateFlags.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkCameraControllerUpdateFlags {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bApplyFieldOfView;
    
    UPROPERTY(EditAnywhere)
    bool bApplyAspectRatio;
    
    UPROPERTY(EditAnywhere)
    bool bApplyFocalLength;
    
    UPROPERTY(EditAnywhere)
    bool bApplyProjectionMode;
    
    UPROPERTY(EditAnywhere)
    bool bApplyFilmBack;
    
    UPROPERTY(EditAnywhere)
    bool bApplyAperture;
    
    UPROPERTY(EditAnywhere)
    bool bApplyFocusDistance;
    
    LIVELINKCAMERA_API FLiveLinkCameraControllerUpdateFlags();
};

