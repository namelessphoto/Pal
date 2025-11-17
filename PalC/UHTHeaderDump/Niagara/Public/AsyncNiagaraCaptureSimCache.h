#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "NiagaraSimCacheCreateParameters.h"
#include "AsyncNiagaraCaptureSimCache.generated.h"

class UAsyncNiagaraCaptureSimCache;
class UNiagaraComponent;
class UNiagaraSimCache;

UCLASS()
class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCaptureComplete, bool, bSuccess);
    
    UPROPERTY()
    UNiagaraSimCache* CaptureSimCache;
    
    UPROPERTY(Instanced)
    UNiagaraComponent* CaptureComponent;
    
    UPROPERTY()
    int32 CaptureNumFrames;
    
    UPROPERTY()
    int32 CaptureFrameRate;
    
    UPROPERTY()
    int32 CaptureFrameCounter;
    
    UPROPERTY()
    int32 TimeOutCounter;
    
    UPROPERTY(BlueprintAssignable)
    FOnCaptureComplete CaptureComplete;
    
    UPROPERTY()
    bool bAdvanceSimulation;
    
    UPROPERTY()
    float AdvanceDeltaTime;
    
    UAsyncNiagaraCaptureSimCache();

    UFUNCTION(BlueprintCallable)
    static UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32 CaptureRate, bool NewBAdvanceSimulation, float NewAdvanceDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32 NumFrames, int32 CaptureRate, bool NewBAdvanceSimulation, float NewAdvanceDeltaTime);
    
};

