#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineSidecarCamera.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineExecutorShot.generated.h"

class UMoviePipelineShotConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineExecutorShot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString OuterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString InnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMoviePipelineSidecarCamera> SidecarCameras;
    
protected:
    UPROPERTY(Transient)
    float Progress;
    
    UPROPERTY(Transient)
    FString StatusMessage;
    
private:
    UPROPERTY()
    UMoviePipelineShotConfig* ShotOverrideConfig;
    
    UPROPERTY()
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;
    
public:
    UMoviePipelineExecutorShot();

    UFUNCTION(BlueprintPure)
    bool ShouldRender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusProgress(const float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetStatusMessage(const FString& InStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetStatusProgress() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString GetStatusMessage() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineShotConfig* GetShotOverridePresetOrigin() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineShotConfig* GetShotOverrideConfiguration() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCameraName(int32 InCameraIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<UMoviePipelineShotConfig> InConfigType);
    
};

