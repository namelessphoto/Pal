#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "LiveLinkTimeSynchronizationSettings.generated.h"

USTRUCT()
struct FLiveLinkTimeSynchronizationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber FrameOffset;
    
    LIVELINKINTERFACE_API FLiveLinkTimeSynchronizationSettings();
};

