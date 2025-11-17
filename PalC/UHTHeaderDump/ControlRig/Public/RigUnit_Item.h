#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_Item.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Item : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    FRigUnit_Item();
};

