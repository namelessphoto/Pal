#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFlowTemplateBase.h"
#include "MovieSceneFlowRepeaterTemplate.generated.h"

USTRUCT()
struct FMovieSceneFlowRepeaterTemplate : public FMovieSceneFlowTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString EventName;
    
    FLOW_API FMovieSceneFlowRepeaterTemplate();
};

