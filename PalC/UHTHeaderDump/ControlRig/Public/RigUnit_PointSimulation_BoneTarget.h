#pragma once
#include "CoreMinimal.h"
#include "RigUnit_PointSimulation_BoneTarget.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PointSimulation_BoneTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 TranslationPoint;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 PrimaryAimPoint;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 SecondaryAimPoint;
    
    FRigUnit_PointSimulation_BoneTarget();
};

