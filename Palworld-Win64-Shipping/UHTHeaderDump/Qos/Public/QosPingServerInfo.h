#pragma once
#include "CoreMinimal.h"
#include "QosPingServerInfo.generated.h"

USTRUCT()
struct FQosPingServerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Address;
    
    UPROPERTY()
    int32 Port;
    
    QOS_API FQosPingServerInfo();
};

