#pragma once
#include "CoreMinimal.h"
#include "RigVMRuntimeSettings.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMRuntimeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaximumArraySize;
    
    FRigVMRuntimeSettings();
};

