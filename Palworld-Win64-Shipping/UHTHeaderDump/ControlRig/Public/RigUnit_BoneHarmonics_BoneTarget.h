#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BoneHarmonics_BoneTarget.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_BoneHarmonics_BoneTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Ratio;
    
    FRigUnit_BoneHarmonics_BoneTarget();
};

