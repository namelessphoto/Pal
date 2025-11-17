#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneBaseCacheSectionTemplateParameters.generated.h"

USTRUCT()
struct FMovieSceneBaseCacheSectionTemplateParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    MOVIESCENETRACKS_API FMovieSceneBaseCacheSectionTemplateParameters();
};

