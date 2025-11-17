#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_ToSwingAndTwist.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ToSwingAndTwist : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TwistAxis;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Swing;
    
    UPROPERTY(BlueprintReadOnly)
    FQuat Twist;
    
    FRigUnit_ToSwingAndTwist();
};

