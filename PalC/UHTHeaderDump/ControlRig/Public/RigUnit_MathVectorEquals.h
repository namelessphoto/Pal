#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorEquals.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector B;
    
    UPROPERTY(BlueprintReadOnly)
    bool Result;
    
    FRigUnit_MathVectorEquals();
};

