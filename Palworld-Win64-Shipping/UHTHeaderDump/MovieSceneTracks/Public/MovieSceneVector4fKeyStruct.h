#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "MovieSceneFloatVectorKeyStructBase.h"
#include "MovieSceneVector4fKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4f Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector4fKeyStruct();
};

