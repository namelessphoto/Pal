#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly)
    float Delta;
    
    UPROPERTY(BlueprintReadOnly)
    float PreviousValue;
    
    UPROPERTY()
    float Cache;
    
    FRigUnit_DeltaFromPreviousFloat();
};

