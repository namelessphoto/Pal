#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnit_SequenceAggregate.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SequenceAggregate : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext A;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext B;
    
    FRigUnit_SequenceAggregate();
};

