#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneMaterialTrack -FallbackName=MovieSceneMaterialTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionExtender -FallbackName=MovieSceneParameterSectionExtender
#include "MovieSceneWidgetMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack, public IMovieSceneEntityProvider, public IMovieSceneParameterSectionExtender {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FName> BrushPropertyNamePath;
    
    UPROPERTY()
    FName TrackName;
    
public:
    UMovieSceneWidgetMaterialTrack();


    // Fix for true pure virtual functions not being implemented
};

