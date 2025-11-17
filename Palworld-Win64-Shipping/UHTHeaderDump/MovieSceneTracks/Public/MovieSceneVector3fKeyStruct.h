#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "MovieSceneFloatVectorKeyStructBase.h"
#include "MovieSceneVector3fKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector3f Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector3fKeyStruct();
};

