#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineEncodeQuality.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineCommandLineEncoder.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FileNameFormatOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMoviePipelineEncodeQuality Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AdditionalCommandLineArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteSourceFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkipEncodeOnRenderCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWriteEachFrameDuration;
    
    UMoviePipelineCommandLineEncoder();

};

