#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneFlowTemplateBase.generated.h"

USTRUCT()
struct FMovieSceneFlowTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY()
    uint8 bFireEventsWhenBackwards: 1;
    
public:
    FLOW_API FMovieSceneFlowTemplateBase();
};

