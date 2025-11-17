#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMByteCodeStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 InstructionCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DataBytes;
    
    RIGVM_API FRigVMByteCodeStatistics();
};

