#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigElementKey.h"
#include "RigUnit_AimConstraint_WorldUp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AimConstraint_WorldUp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigVectorKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey space;
    
    FRigUnit_AimConstraint_WorldUp();
};

