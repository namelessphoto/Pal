#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "MoviePipelineQueue.generated.h"

class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;

UCLASS(BlueprintType)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMoviePipelineExecutorJob*> Jobs;
    
public:
    UMoviePipelineQueue();

    UFUNCTION(BlueprintCallable)
    void SetJobIndex(UMoviePipelineExecutorJob* InJob, int32 Index);
    
    UFUNCTION(BlueprintPure)
    TArray<UMoviePipelineExecutorJob*> GetJobs() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* DuplicateJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    void DeleteJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllJobs();
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(UMoviePipelineQueue* InQueue);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<UMoviePipelineExecutorJob> InJobType);
    
};

