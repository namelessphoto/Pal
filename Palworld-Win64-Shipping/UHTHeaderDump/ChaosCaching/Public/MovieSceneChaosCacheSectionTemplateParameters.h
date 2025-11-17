#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneBaseCacheSectionTemplateParameters -FallbackName=MovieSceneBaseCacheSectionTemplateParameters
#include "MovieSceneChaosCacheParams.h"
#include "MovieSceneChaosCacheSectionTemplateParameters.generated.h"

USTRUCT()
struct FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneChaosCacheParams ChaosCacheParams;
    
    CHAOSCACHING_API FMovieSceneChaosCacheSectionTemplateParameters();
};

