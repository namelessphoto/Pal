#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneHookSection -FallbackName=MovieSceneHookSection
#include "MovieSceneLensComponentSection.generated.h"

class ULensFile;

UCLASS()
class CAMERACALIBRATIONCOREMOVIESCENE_API UMovieSceneLensComponentSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bReapplyNodalOffset;
    
    UPROPERTY(EditAnywhere)
    ULensFile* OverrideLensFile;
    
private:
    UPROPERTY(VisibleAnywhere)
    ULensFile* CachedLensFile;
    
    UPROPERTY()
    TArray<FMovieSceneFloatChannel> DistortionParameterChannels;
    
    UPROPERTY()
    TArray<FMovieSceneFloatChannel> FxFyChannels;
    
    UPROPERTY()
    TArray<FMovieSceneFloatChannel> ImageCenterChannels;
    
public:
    UMovieSceneLensComponentSection();

};

