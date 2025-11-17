#pragma once
#include "CoreMinimal.h"
#include "ControlRigExecuteContext.h"
#include "RigUnitMutable.h"
#include "RigUnit_ForLoopCount.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ForLoopCount : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    float Ratio;
    
    UPROPERTY()
    bool Continue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FControlRigExecuteContext Completed;
    
    FRigUnit_ForLoopCount();
};

