#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DatacenterQosInstance.h"
#include "QosEvaluator.generated.h"

UCLASS()
class QOS_API UQosEvaluator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bInProgress;
    
    UPROPERTY()
    bool bCancelOperation;
    
    UPROPERTY(Transient)
    TArray<FDatacenterQosInstance> Datacenters;
    
public:
    UQosEvaluator();

};

