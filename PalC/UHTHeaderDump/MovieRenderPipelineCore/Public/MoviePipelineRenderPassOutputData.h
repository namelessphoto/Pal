#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineRenderPassOutputData.generated.h"

USTRUCT(BlueprintType)
struct FMoviePipelineRenderPassOutputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> FilePaths;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineRenderPassOutputData();
};

