#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorScale.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Factor;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Result;
    
    FRigUnit_MathVectorScale();
};

