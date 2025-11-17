#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_RandomFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_RandomFloat : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly)
    float Result;
    
    UPROPERTY()
    float LastResult;
    
    UPROPERTY()
    int32 LastSeed;
    
    UPROPERTY()
    int32 BaseSeed;
    
    UPROPERTY()
    float TimeLeft;
    
    FRigUnit_RandomFloat();
};

