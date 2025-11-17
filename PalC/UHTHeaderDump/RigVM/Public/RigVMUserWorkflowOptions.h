#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RigVMUserWorkflow.h"
#include "RigVMUserWorkflowOptions.generated.h"

UCLASS(BlueprintType)
class RIGVM_API URigVMUserWorkflowOptions : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UObject* Subject;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRigVMUserWorkflow Workflow;
    
public:
    URigVMUserWorkflowOptions();

    UFUNCTION(BlueprintPure)
    bool RequiresDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void ReportWarning(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void ReportInfo(const FString& InMessage);
    
    UFUNCTION(BlueprintCallable)
    void ReportError(const FString& InMessage);
    
    UFUNCTION(BlueprintPure)
    bool IsValid() const;
    
};

