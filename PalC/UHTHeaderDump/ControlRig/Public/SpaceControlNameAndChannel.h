#pragma once
#include "CoreMinimal.h"
#include "MovieSceneControlRigSpaceChannel.h"
#include "SpaceControlNameAndChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FSpaceControlNameAndChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ControlName;
    
    UPROPERTY()
    FMovieSceneControlRigSpaceChannel SpaceCurve;
    
    FSpaceControlNameAndChannel();
};

