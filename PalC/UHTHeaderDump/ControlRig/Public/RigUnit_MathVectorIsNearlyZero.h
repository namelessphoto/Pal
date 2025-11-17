#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorIsNearlyZero.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Tolerance;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_MathVectorIsNearlyZero();
};

