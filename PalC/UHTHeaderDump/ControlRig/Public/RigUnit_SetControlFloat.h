#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetControlFloat : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FloatValue;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    FRigUnit_SetControlFloat();
};

