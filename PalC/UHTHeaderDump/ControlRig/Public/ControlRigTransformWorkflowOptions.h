#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMUserWorkflow -FallbackName=RigVMUserWorkflow
#include "ControlRigWorkflowOptions.h"
#include "ERigTransformType.h"
#include "ControlRigTransformWorkflowOptions.generated.h"

class UObject;

UCLASS()
class CONTROLRIG_API UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ERigTransformType> TransformType;
    
    UControlRigTransformWorkflowOptions();

    UFUNCTION()
    TArray<FRigVMUserWorkflow> ProvideWorkflows(const UObject* InSubject);
    
};

