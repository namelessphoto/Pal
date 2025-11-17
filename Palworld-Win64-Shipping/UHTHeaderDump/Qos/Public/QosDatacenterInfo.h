#pragma once
#include "CoreMinimal.h"
#include "QosPingServerInfo.h"
#include "QosDatacenterInfo.generated.h"

USTRUCT(BlueprintType)
struct FQosDatacenterInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ID;
    
    UPROPERTY()
    FString regionId;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    TArray<FQosPingServerInfo> Servers;
    
    QOS_API FQosDatacenterInfo();
};

