#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_AddParent.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Parent;
    
    FRigUnit_AddParent();
};

