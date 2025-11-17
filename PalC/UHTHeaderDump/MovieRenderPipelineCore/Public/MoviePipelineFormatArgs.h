#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineFormatArgs.generated.h"

class UMoviePipelineExecutorJob;

USTRUCT(BlueprintType)
struct FMoviePipelineFormatArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> FilenameArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> FileMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMoviePipelineExecutorJob* InJob;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineFormatArgs();
};

