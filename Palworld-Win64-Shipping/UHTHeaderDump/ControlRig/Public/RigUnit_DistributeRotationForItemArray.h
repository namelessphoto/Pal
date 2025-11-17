#pragma once
#include "CoreMinimal.h"
#include "EControlRigAnimEasingType.h"
#include "RigElementKey.h"
#include "RigUnit_DistributeRotation_Rotation.h"
#include "RigUnit_DistributeRotation_WorkData.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_DistributeRotationForItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigUnit_DistributeRotation_Rotation> Rotations;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EControlRigAnimEasingType RotationEaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(Transient)
    FRigUnit_DistributeRotation_WorkData WorkData;
    
    FRigUnit_DistributeRotationForItemArray();
};

