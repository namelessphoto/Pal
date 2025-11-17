#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveInterpMode -FallbackName=ERichCurveInterpMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveTangentMode -FallbackName=ERichCurveTangentMode
#include "MovieSceneTangentData.h"
#include "MovieSceneFloatValue.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValue {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneTangentData Tangent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;
    
    UPROPERTY()
    uint8 PaddingByte;
    
    MOVIESCENE_API FMovieSceneFloatValue();
};

