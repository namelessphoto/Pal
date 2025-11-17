#pragma once
#include "CoreMinimal.h"
#include "RigVMTemplateArgumentType.generated.h"

class UObject;

USTRUCT()
struct RIGVM_API FRigVMTemplateArgumentType {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CPPType;
    
    UPROPERTY()
    UObject* CPPTypeObject;
    
    FRigVMTemplateArgumentType();
};

