#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneComposureExportPass.h"
#include "MovieSceneComposureExportSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneComposureExportPass Pass;
    
public:
    COMPOSURE_API FMovieSceneComposureExportSectionTemplate();
};

