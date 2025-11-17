#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_TimeLoop.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_TimeLoop : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Normalize;
    
    UPROPERTY(BlueprintReadOnly)
    float Absolute;
    
    UPROPERTY(BlueprintReadOnly)
    float Relative;
    
    UPROPERTY(BlueprintReadOnly)
    float FlipFlop;
    
    UPROPERTY(BlueprintReadOnly)
    bool Even;
    
    UPROPERTY()
    float AccumulatedAbsolute;
    
    UPROPERTY()
    float AccumulatedRelative;
    
    UPROPERTY()
    int32 NumIterations;
    
    FRigUnit_TimeLoop();
};

