#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EMediaIOStandardType.h"
#include "MediaIOMode.generated.h"

USTRUCT()
struct MEDIAIOCORE_API FMediaIOMode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FFrameRate FrameRate;
    
    UPROPERTY(VisibleAnywhere)
    FIntPoint Resolution;
    
    UPROPERTY(VisibleAnywhere)
    EMediaIOStandardType Standard;
    
    UPROPERTY(VisibleAnywhere)
    int32 DeviceModeIdentifier;
    
    FMediaIOMode();
};

