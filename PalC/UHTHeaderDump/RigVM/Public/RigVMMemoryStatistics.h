#pragma once
#include "CoreMinimal.h"
#include "RigVMMemoryStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMMemoryStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 RegisterCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DataBytes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalBytes;
    
    RIGVM_API FRigVMMemoryStatistics();
};

