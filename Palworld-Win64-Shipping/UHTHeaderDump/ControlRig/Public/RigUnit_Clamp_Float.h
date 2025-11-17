#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_Clamp_Float.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Clamp_Float : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    FRigUnit_Clamp_Float();
};

