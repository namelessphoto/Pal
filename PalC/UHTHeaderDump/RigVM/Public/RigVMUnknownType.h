#pragma once
#include "CoreMinimal.h"
#include "RigVMUnknownType.generated.h"

USTRUCT()
struct RIGVM_API FRigVMUnknownType {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 Hash;
    
public:
    FRigVMUnknownType();
};

