#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_NoiseDouble.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_NoiseDouble : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    double Maximum;
    
    UPROPERTY(BlueprintReadOnly)
    double Result;
    
    UPROPERTY()
    double Time;
    
    FRigUnit_NoiseDouble();
};

