#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
#include "MovieSceneLensComponentTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class CAMERACALIBRATIONCOREMOVIESCENE_API UMovieSceneLensComponentTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneLensComponentTrack();

};

