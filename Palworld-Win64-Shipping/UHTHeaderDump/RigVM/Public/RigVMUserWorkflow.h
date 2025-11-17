#pragma once
#include "CoreMinimal.h"
#include "ERigVMUserWorkflowType.h"
#include "RigVMPeformUserWorkflowDynamicDelegateDelegate.h"
#include "RigVMUserWorkflow.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMUserWorkflow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigVMUserWorkflowType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigVMPeformUserWorkflowDynamicDelegate PerformDynamicDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClass* OptionsClass;
    
public:
    FRigVMUserWorkflow();
};

