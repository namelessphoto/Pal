#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneChaosCacheSectionTemplateParameters.h"
#include "MovieSceneChaosCacheSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneChaosCacheSectionTemplateParameters Params;
    
    CHAOSCACHING_API FMovieSceneChaosCacheSectionTemplate();
};

