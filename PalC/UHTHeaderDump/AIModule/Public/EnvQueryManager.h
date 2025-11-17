#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "EEnvQueryRunMode.h"
#include "EnvQueryInstanceCache.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryManager.generated.h"

class UEnvQuery;
class UEnvQueryContext;
class UEnvQueryInstanceBlueprintWrapper;
class UObject;

UCLASS(BlueprintType, Transient, Config=Game)
class AIMODULE_API UEnvQueryManager : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FEnvQueryInstanceCache> InstanceCache;
    
    UPROPERTY(Transient)
    TArray<UEnvQueryContext*> LocalContexts;
    
    UPROPERTY()
    TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
    
    UPROPERTY(Config)
    float MaxAllowedTestingTime;
    
    UPROPERTY(Config)
    bool bTestQueriesUsingBreadth;
    
    UPROPERTY(Config)
    int32 QueryCountWarningThreshold;
    
    UPROPERTY(Config)
    double QueryCountWarningInterval;
    
    UPROPERTY(Config)
    double ExecutionTimeWarningSeconds;
    
    UPROPERTY(Config)
    double HandlingResultTimeWarningSeconds;
    
    UPROPERTY(Config)
    double GenerationTimeWarningSeconds;
    
public:
    UEnvQueryManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);
    
};

