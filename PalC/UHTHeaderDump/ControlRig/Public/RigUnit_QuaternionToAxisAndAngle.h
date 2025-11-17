#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_QuaternionToAxisAndAngle.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_QuaternionToAxisAndAngle : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Argument;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Axis;
    
    UPROPERTY(BlueprintReadOnly)
    float Angle;
    
    FRigUnit_QuaternionToAxisAndAngle();
};

