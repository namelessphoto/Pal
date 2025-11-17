#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionMakeAbsolute.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionMakeAbsolute : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Parent;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Global;
    
    FRigUnit_MathQuaternionMakeAbsolute();
};

