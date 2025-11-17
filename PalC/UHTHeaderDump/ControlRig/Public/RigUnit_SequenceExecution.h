#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnit_SequenceExecution.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SequenceExecution : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext A;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext B;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext C;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext D;
    
    FRigUnit_SequenceExecution();
};

