#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EQosDatacenterResult.h"
#include "QosDatacenterInfo.h"
#include "DatacenterQosInstance.generated.h"

USTRUCT(BlueprintType)
struct QOS_API FDatacenterQosInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FQosDatacenterInfo Definition;
    
    UPROPERTY(Transient)
    EQosDatacenterResult Result;
    
    UPROPERTY(Transient)
    int32 AvgPingMs;
    
    UPROPERTY(Transient)
    TArray<int32> PingResults;
    
    UPROPERTY(Transient)
    FDateTime LastCheckTimestamp;
    
    UPROPERTY(Transient)
    bool bUsable;
    
    FDatacenterQosInstance();
};

