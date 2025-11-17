#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorBase.h"
#include "RigUnit_MathVectorMakeRelative.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathVectorMakeRelative : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Parent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Local;
    
    FRigUnit_MathVectorMakeRelative();
};

