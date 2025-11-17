#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit.h"
#include "RigUnit_BinaryQuaternionOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BinaryQuaternionOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Argument0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Argument1;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Result;
    
    FRigUnit_BinaryQuaternionOp();
};

