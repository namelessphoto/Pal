#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneDoubleVectorTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 NumChannelsUsed;
    
public:
    UMovieSceneDoubleVectorTrack();

};

