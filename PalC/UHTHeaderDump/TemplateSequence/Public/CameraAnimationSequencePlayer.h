#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneRootEvaluationTemplateInstance -FallbackName=MovieSceneRootEvaluationTemplateInstance
#include "CameraAnimationSequencePlayer.generated.h"

class UMovieSceneSequence;

UCLASS()
class TEMPLATESEQUENCE_API UCameraAnimationSequencePlayer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* BoundObjectOverride;
    
    UPROPERTY(Transient)
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(Transient)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
public:
    UCameraAnimationSequencePlayer();

};

