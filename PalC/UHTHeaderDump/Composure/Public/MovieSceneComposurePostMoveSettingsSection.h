#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneComposurePostMoveSettingsSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel Pivot[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel RotationAngle;
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale;
    
    UMovieSceneComposurePostMoveSettingsSection();

};

