#pragma once
#include "CoreMinimal.h"
#include "MoviePipelinePassIdentifier.h"
#include "MoviePipelineRenderPassOutputData.h"
#include "MoviePipelineShotOutputData.generated.h"

class UMoviePipelineExecutorShot;

USTRUCT(BlueprintType)
struct FMoviePipelineShotOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UMoviePipelineExecutorShot> Shot;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<FMoviePipelinePassIdentifier, FMoviePipelineRenderPassOutputData> RenderPassData;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineShotOutputData();
};

