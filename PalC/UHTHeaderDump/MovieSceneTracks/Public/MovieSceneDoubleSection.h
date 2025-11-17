#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDoubleChannel -FallbackName=MovieSceneDoubleChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneDoubleSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneDoubleSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneDoubleChannel DoubleCurve;
    
public:
    UMovieSceneDoubleSection();


    // Fix for true pure virtual functions not being implemented
};

