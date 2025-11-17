#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneFloatVectorTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 NumChannelsUsed;
    
public:
    UMovieSceneFloatVectorTrack();

};

