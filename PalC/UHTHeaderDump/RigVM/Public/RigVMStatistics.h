#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.h"
#include "RigVMMemoryStatistics.h"
#include "RigVMStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BytesForCDO;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BytesPerInstance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRigVMMemoryStatistics LiteralMemory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRigVMMemoryStatistics WorkMemory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRigVMMemoryStatistics DebugMemory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BytesForCaching;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRigVMByteCodeStatistics ByteCode;
    
    RIGVM_API FRigVMStatistics();
};

