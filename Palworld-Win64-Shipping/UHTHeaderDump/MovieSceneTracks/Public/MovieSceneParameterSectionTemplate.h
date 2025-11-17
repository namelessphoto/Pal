#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "BoolParameterNameAndCurve.h"
#include "ColorParameterNameAndCurves.h"
#include "ScalarParameterNameAndCurve.h"
#include "TransformParameterNameAndCurves.h"
#include "Vector2DParameterNameAndCurves.h"
#include "VectorParameterNameAndCurves.h"
#include "MovieSceneParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FScalarParameterNameAndCurve> Scalars;
    
    UPROPERTY()
    TArray<FBoolParameterNameAndCurve> Bools;
    
    UPROPERTY()
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;
    
    UPROPERTY()
    TArray<FVectorParameterNameAndCurves> Vectors;
    
    UPROPERTY()
    TArray<FColorParameterNameAndCurves> Colors;
    
    UPROPERTY()
    TArray<FTransformParameterNameAndCurves> Transforms;
    
public:
    MOVIESCENETRACKS_API FMovieSceneParameterSectionTemplate();
};

