#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneBaseCacheSection -FallbackName=MovieSceneBaseCacheSection
#include "MovieSceneChaosCacheParams.h"
#include "MovieSceneChaosCacheSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneChaosCacheParams Params;
    
    UMovieSceneChaosCacheSection();

};

