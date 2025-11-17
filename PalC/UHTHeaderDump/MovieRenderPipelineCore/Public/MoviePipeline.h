#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MoviePipelineFinishedDelegate.h"
#include "MoviePipelineWorkFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MoviePipeline.generated.h"

class ALevelSequenceActor;
class UEngineCustomTimeStep;
class ULevelSequence;
class UMoviePipelineCustomTimeStep;
class UMoviePipelineExecutorJob;
class UMoviePipelineMasterConfig;
class UMovieRenderDebugWidget;
class UTexture;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipeline : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineFinished OnMoviePipelineFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineWorkFinished OnMoviePipelineWorkFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineWorkFinished OnMoviePipelineShotWorkFinishedDelegate;
    
private:
    UPROPERTY(Instanced, Transient)
    UMoviePipelineCustomTimeStep* CustomTimeStep;
    
    UPROPERTY(Transient)
    UEngineCustomTimeStep* CachedPrevCustomTimeStep;
    
    UPROPERTY(Transient)
    ULevelSequence* TargetSequence;
    
    UPROPERTY(Transient)
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(Instanced, Transient)
    UMovieRenderDebugWidget* DebugWidget;
    
    UPROPERTY(Transient)
    UTexture* PreviewTexture;
    
public:
    UPROPERTY(Transient)
    TSubclassOf<UMovieRenderDebugWidget> DebugWidgetClass;
    
private:
    UPROPERTY(Transient)
    UMoviePipelineExecutorJob* CurrentJob;
    
public:
    UMoviePipeline();

    UFUNCTION(BlueprintCallable)
    void Shutdown(bool bError);
    
    UFUNCTION(BlueprintCallable)
    void SetInitializationTime(const FDateTime& InDateTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestShutdown(bool bIsError);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoviePipelineFinishedImpl();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsShutdownRequested() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintPure)
    UTexture* GetPreviewTexture() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineMasterConfig* GetPipelineMasterConfig() const;
    
    UFUNCTION(BlueprintPure)
    FDateTime GetInitializationTime() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineExecutorJob* GetCurrentJob() const;
    
};

