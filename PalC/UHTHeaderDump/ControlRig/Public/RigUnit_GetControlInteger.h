#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "RigUnit_GetControlInteger.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetControlInteger : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadOnly)
    int32 IntegerValue;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Minimum;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_GetControlInteger();
};

