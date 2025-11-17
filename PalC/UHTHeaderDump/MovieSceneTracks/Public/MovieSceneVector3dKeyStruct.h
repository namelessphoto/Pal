#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3d -FallbackName=Vector3d
#include "MovieSceneDoubleVectorKeyStructBase.h"
#include "MovieSceneVector3dKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector3d Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector3dKeyStruct();
};

