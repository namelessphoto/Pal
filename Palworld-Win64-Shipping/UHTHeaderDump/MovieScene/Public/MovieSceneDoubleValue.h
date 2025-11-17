#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentMode -FallbackName=ERichCurveTangentMode
#include "MovieSceneTangentData.h"
#include "MovieSceneDoubleValue.generated.h"

USTRUCT()
struct FMovieSceneDoubleValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double Value;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneTangentData Tangent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY()
    uint8 PaddingByte;
    
    MOVIESCENE_API FMovieSceneDoubleValue();
};

