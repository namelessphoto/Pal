#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFlowSectionBase.h"
#include "MovieSceneFlowRepeaterSection.generated.h"

UCLASS()
class FLOW_API UMovieSceneFlowRepeaterSection : public UMovieSceneFlowSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EventName;
    
    UMovieSceneFlowRepeaterSection();

};

