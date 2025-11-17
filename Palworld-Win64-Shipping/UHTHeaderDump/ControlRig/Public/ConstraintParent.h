#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "ConstraintParent.generated.h"

USTRUCT(BlueprintType)
struct FConstraintParent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    CONTROLRIG_API FConstraintParent();
};

