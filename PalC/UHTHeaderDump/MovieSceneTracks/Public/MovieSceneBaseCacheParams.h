#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneBaseCacheParams.generated.h"

USTRUCT()
struct MOVIESCENETRACKS_API FMovieSceneBaseCacheParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameNumber FirstLoopStartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    uint8 bReverse: 1;
    
    FMovieSceneBaseCacheParams();
};

