#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_Timeline.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Timeline : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    float Time;
    
    UPROPERTY()
    float AccumulatedValue;
    
    FRigUnit_Timeline();
};

