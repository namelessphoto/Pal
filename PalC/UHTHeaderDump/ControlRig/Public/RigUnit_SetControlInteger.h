#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlInteger.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetControlInteger : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IntegerValue;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_SetControlInteger();
};

