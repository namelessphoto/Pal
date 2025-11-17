#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideProvider -FallbackName=MovieSceneChannelOverrideProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDoubleChannel -FallbackName=MovieSceneDoubleChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneConstrainedSection.h"
#include "MovieSceneTransformMask.h"
#include "MovieScene3DTransformSection.generated.h"

class UMovieScene3DTransformSectionConstraints;
class UMovieSceneSectionChannelOverrideRegistry;

UCLASS(MinimalAPI)
class UMovieScene3DTransformSection : public UMovieSceneSection, public IMovieSceneConstrainedSection, public IMovieSceneEntityProvider, public IMovieSceneChannelOverrideProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY()
    FMovieSceneDoubleChannel Translation[3];
    
    UPROPERTY()
    FMovieSceneDoubleChannel Rotation[3];
    
    UPROPERTY()
    FMovieSceneDoubleChannel Scale[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY()
    UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;
    
    UPROPERTY()
    UMovieScene3DTransformSectionConstraints* Constraints;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuaternionInterpolation;
    
public:
    UMovieScene3DTransformSection();


    // Fix for true pure virtual functions not being implemented
};

