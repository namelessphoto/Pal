#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigElementKey.h"
#include "RigUnit_AimItem_Target.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AimItem_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EControlRigVectorKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey space;
    
    FRigUnit_AimItem_Target();
};

