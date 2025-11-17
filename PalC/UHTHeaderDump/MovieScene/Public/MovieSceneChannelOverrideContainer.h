#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneChannelOverrideContainer.generated.h"

UCLASS(Abstract)
class MOVIESCENE_API UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UMovieSceneChannelOverrideContainer();

};

