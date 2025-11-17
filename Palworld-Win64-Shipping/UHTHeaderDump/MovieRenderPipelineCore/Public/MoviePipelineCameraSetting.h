#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineShutterTiming.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineCameraSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineCameraSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMoviePipelineShutterTiming ShutterTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverscanPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRenderAllCameras;
    
    UMoviePipelineCameraSetting();

};

