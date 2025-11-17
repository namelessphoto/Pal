#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformBase.h"
#include "RigUnit_MathTransformMakeRelative.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Parent;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Local;
    
    FRigUnit_MathTransformMakeRelative();
};

