#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneControlRigSpaceType.h"
#include "RigElementKey.h"
#include "MovieSceneControlRigSpaceBaseKey.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FMovieSceneControlRigSpaceBaseKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMovieSceneControlRigSpaceType SpaceType;
    
    UPROPERTY(EditAnywhere)
    FRigElementKey ControlRigElement;
    
    FMovieSceneControlRigSpaceBaseKey();
};

