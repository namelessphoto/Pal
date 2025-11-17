#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathBase.h"
#include "RigUnit_RandomVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_RandomVector : public FRigUnit_MathBase {
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
    FVector Result;
    
    UPROPERTY()
    FVector LastResult;
    
    UPROPERTY()
    int32 LastSeed;
    
    UPROPERTY()
    int32 BaseSeed;
    
    UPROPERTY()
    float TimeLeft;
    
    FRigUnit_RandomVector();
};

