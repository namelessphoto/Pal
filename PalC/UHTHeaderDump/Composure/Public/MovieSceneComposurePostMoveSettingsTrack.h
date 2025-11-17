#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
#include "MovieSceneComposurePostMoveSettingsTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneComposurePostMoveSettingsTrack();


    // Fix for true pure virtual functions not being implemented
};

