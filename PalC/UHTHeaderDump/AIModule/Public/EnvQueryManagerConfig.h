#pragma once
#include "CoreMinimal.h"
#include "EnvQueryManagerConfig.generated.h"

USTRUCT()
struct FEnvQueryManagerConfig {
    GENERATED_BODY()
public:
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
    
    AIMODULE_API FEnvQueryManagerConfig();
};

