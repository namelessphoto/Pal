#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
#include "MovieSceneComposurePostMoveSettingsSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel Pivot[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel RotationAngle;
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    COMPOSURE_API FMovieSceneComposurePostMoveSettingsSectionTemplate();
};

