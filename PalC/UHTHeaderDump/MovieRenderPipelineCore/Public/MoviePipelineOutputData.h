#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineShotOutputData.h"
#include "MoviePipelineOutputData.generated.h"

class UMoviePipeline;
class UMoviePipelineExecutorJob;

USTRUCT(BlueprintType)
struct FMoviePipelineOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMoviePipeline* Pipeline;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMoviePipelineExecutorJob* Job;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSuccess;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FMoviePipelineShotOutputData> ShotData;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineOutputData();
};

