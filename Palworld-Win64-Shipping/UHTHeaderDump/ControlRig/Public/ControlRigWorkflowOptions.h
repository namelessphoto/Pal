#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMUserWorkflowOptions -FallbackName=RigVMUserWorkflowOptions
#include "RigElementKey.h"
#include "ControlRigWorkflowOptions.generated.h"

class URigHierarchy;

UCLASS()
class CONTROLRIG_API UControlRigWorkflowOptions : public URigVMUserWorkflowOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    URigHierarchy* Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FRigElementKey> Selection;
    
    UControlRigWorkflowOptions();

    UFUNCTION(BlueprintPure)
    bool EnsureAtLeastOneRigElementSelected() const;
    
};

