#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MoviePipelineWorkFinishedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MoviePipelineQueueEngineSubsystem.generated.h"

class ULevelSequence;
class UMoviePipelineExecutorBase;
class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;
class UMovieRenderDebugWidget;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMoviePipelineWorkFinished OnRenderFinished;
    
private:
    UPROPERTY(Transient)
    UMoviePipelineExecutorBase* ActiveExecutor;
    
    UPROPERTY(Instanced, Transient)
    UMoviePipelineQueue* CurrentQueue;
    
public:
    UMoviePipelineQueueEngineSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetConfiguration(TSubclassOf<UMovieRenderDebugWidget> InProgressWidgetClass, const bool bRenderPlayerViewport);
    
    UFUNCTION(BlueprintCallable)
    void RenderQueueWithExecutorInstance(UMoviePipelineExecutorBase* InExecutor);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<UMoviePipelineExecutorBase> InExecutorType);
    
    UFUNCTION(BlueprintCallable)
    void RenderJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineQueue* GetQueue() const;
    
    UFUNCTION(BlueprintPure)
    UMoviePipelineExecutorBase* GetActiveExecutor() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* AllocateJob(ULevelSequence* InSequence);
    
};

