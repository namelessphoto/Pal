#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "MovieSceneFloatVectorKeyStructBase.h"
#include "MovieSceneVector2fKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2f Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector2fKeyStruct();
};

