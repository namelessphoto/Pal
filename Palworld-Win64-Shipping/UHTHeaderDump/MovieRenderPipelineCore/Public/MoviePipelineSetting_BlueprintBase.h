#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineFormatArgs.h"
#include "MoviePipelineSetting.h"
#include "MoviePipelineSetting_BlueprintBase.generated.h"

class UMoviePipeline;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FText CategoryText;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsValidOnMaster;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsValidOnShots;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanBeDisabled;
    
public:
    UMoviePipelineSetting_BlueprintBase();

    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTeardownForPipelineImpl(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveSetupForPipelineImpl(UMoviePipeline* InPipeline);
    
    UFUNCTION(BlueprintNativeEvent)
    FMoviePipelineFormatArgs ReceiveGetFormatArguments(UPARAM(Ref) FMoviePipelineFormatArgs& InOutFormatArgs) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEngineTickBeginFrame();
    
};

