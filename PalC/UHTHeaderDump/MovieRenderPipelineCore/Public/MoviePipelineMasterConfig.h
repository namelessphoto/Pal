#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MoviePipelineConfigBase.h"
#include "MoviePipelineMasterConfig.generated.h"

class ULevelSequence;
class UMoviePipelineOutputSetting;
class UMoviePipelineSetting;
class UMoviePipelineShotConfig;

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineMasterConfig : public UMoviePipelineConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TMap<FString, UMoviePipelineShotConfig*> PerShotConfigMapping;
    
private:
    UPROPERTY(Instanced)
    UMoviePipelineOutputSetting* OutputSetting;
    
    UPROPERTY(Transient)
    TArray<UMoviePipelineSetting*> TransientSettings;
    
public:
    UMoviePipelineMasterConfig();

    UFUNCTION(BlueprintCallable)
    void InitializeTransientSettings();
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineSetting*> GetTransientSettings() const;
    
    UFUNCTION(BlueprintPure)
    FFrameRate GetEffectiveFrameRate(const ULevelSequence* InSequence) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings) const;
    
};

