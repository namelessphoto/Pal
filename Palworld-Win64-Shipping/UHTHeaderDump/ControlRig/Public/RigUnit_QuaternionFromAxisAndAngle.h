#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_QuaternionFromAxisAndAngle.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Angle;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Result;
    
    FRigUnit_QuaternionFromAxisAndAngle();
};

