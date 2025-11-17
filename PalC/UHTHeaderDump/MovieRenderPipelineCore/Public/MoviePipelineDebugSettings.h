#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineDebugSettings.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineDebugSettings : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWriteAllSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCaptureFramesWithRenderDoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CaptureFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCaptureUnrealInsightsTrace;
    
    UMoviePipelineDebugSettings();

};

