#pragma once
#include "CoreMinimal.h"
#include "QosSubspaceComparisonParams.h"
#include "QosRegionInfo.generated.h"

USTRUCT(BlueprintType)
struct FQosRegionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    FString regionId;
    
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    bool bAutoAssignable;
    
    UPROPERTY()
    bool bAllowSubspaceBias;
    
    UPROPERTY()
    FQosSubspaceComparisonParams SubspaceBiasParams;
    
    QOS_API FQosRegionInfo();
};

