#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCameraShakeSectionData.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneCameraShakeSection.generated.h"

class UCameraShakeBase;

UCLASS(MinimalAPI)
class UMovieSceneCameraShakeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneCameraShakeSectionData ShakeData;
    
    UPROPERTY()
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY()
    float PlayScale;
    
    UPROPERTY()
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY()
    FRotator UserDefinedPlaySpace;
    
    UMovieSceneCameraShakeSection();

};

