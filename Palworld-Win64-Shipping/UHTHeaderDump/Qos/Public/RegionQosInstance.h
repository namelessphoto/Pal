#pragma once
#include "CoreMinimal.h"
#include "DatacenterQosInstance.h"
#include "QosRegionInfo.h"
#include "RegionQosInstance.generated.h"

USTRUCT(BlueprintType)
struct QOS_API FRegionQosInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FQosRegionInfo Definition;
    
    UPROPERTY()
    TArray<FDatacenterQosInstance> DatacenterOptions;
    
    FRegionQosInstance();
};

