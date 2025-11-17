#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneStringChannel -FallbackName=MovieSceneStringChannel
#include "MovieSceneFlowSectionBase.h"
#include "MovieSceneFlowTriggerSection.generated.h"

UCLASS()
class FLOW_API UMovieSceneFlowTriggerSection : public UMovieSceneFlowSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneStringChannel StringChannel;
    
    UMovieSceneFlowTriggerSection();

};

