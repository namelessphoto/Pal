#pragma once
#include "CoreMinimal.h"
#include "QosSubspaceComparisonParams.generated.h"

USTRUCT()
struct FQosSubspaceComparisonParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MaxNonSubspacePingMs;
    
    UPROPERTY()
    int32 MinSubspacePingMs;
    
    UPROPERTY()
    int32 ConstantMaxToleranceMs;
    
    UPROPERTY()
    float ScaledMaxTolerancePct;
    
    QOS_API FQosSubspaceComparisonParams();
};

