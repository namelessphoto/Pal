#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ECameraAnimationEasingType.h"
#include "ECameraAnimationPlaySpace.h"
#include "CameraAnimationParams.generated.h"

USTRUCT(BlueprintType)
struct FCameraAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite)
    float Scale;
    
    UPROPERTY(BlueprintReadWrite)
    ECameraAnimationEasingType EaseInType;
    
    UPROPERTY(BlueprintReadWrite)
    float EaseInDuration;
    
    UPROPERTY(BlueprintReadWrite)
    ECameraAnimationEasingType EaseOutType;
    
    UPROPERTY(BlueprintReadWrite)
    float EaseOutDuration;
    
    UPROPERTY(BlueprintReadWrite)
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRandomStartTime;
    
    UPROPERTY(BlueprintReadWrite)
    float DurationOverride;
    
    UPROPERTY(BlueprintReadWrite)
    ECameraAnimationPlaySpace PlaySpace;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator UserPlaySpaceRot;
    
    GAMEPLAYCAMERAS_API FCameraAnimationParams();
};

