#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnit.h"
#include "RigUnit_UserDefinedEvent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_UserDefinedEvent : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext ExecuteContext;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere)
    FName EventName;
    
    FRigUnit_UserDefinedEvent();
};

