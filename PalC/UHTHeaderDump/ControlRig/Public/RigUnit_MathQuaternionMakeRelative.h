#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionMakeRelative.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionMakeRelative : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Parent;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Local;
    
    FRigUnit_MathQuaternionMakeRelative();
};

