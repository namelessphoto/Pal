#pragma once
#include "CoreMinimal.h"
#include "CameraAnimationHandle.h"
#include "CameraAnimationParams.h"
#include "ActiveCameraAnimationInfo.generated.h"

class UCameraAnimationSequence;
class UCameraAnimationSequenceCameraStandIn;
class UCameraAnimationSequencePlayer;

USTRUCT(BlueprintType)
struct GAMEPLAYCAMERAS_API FActiveCameraAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCameraAnimationSequence* Sequence;
    
    UPROPERTY()
    FCameraAnimationParams Params;
    
    UPROPERTY()
    FCameraAnimationHandle Handle;
    
    UPROPERTY(Transient)
    UCameraAnimationSequencePlayer* Player;
    
    UPROPERTY(Transient)
    UCameraAnimationSequenceCameraStandIn* CameraStandIn;
    
    UPROPERTY()
    float EaseInCurrentTime;
    
    UPROPERTY()
    float EaseOutCurrentTime;
    
    UPROPERTY()
    bool bIsEasingIn;
    
    UPROPERTY()
    bool bIsEasingOut;
    
    FActiveCameraAnimationInfo();
};

