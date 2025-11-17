#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionSelectBool.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat IfTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat IfFalse;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Result;
    
    FRigUnit_MathQuaternionSelectBool();
};

