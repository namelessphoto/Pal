#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_Harmonics_TargetItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Harmonics_TargetItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Ratio;
    
    FRigUnit_Harmonics_TargetItem();
};

