#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneSkeletalAnimationParams.h"
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationSectionTemplateParameters();
};

