#pragma once
#include "CoreMinimal.h"
#include "RigUnit_CCDIK_RotationLimit.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_CCDIK_RotationLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Limit;
    
    FRigUnit_CCDIK_RotationLimit();
};

