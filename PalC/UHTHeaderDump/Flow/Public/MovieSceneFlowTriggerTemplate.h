#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneFlowTemplateBase.h"
#include "MovieSceneFlowTriggerTemplate.generated.h"

USTRUCT()
struct FMovieSceneFlowTriggerTemplate : public FMovieSceneFlowTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY()
    TArray<FString> EventNames;
    
    FLOW_API FMovieSceneFlowTriggerTemplate();
};

