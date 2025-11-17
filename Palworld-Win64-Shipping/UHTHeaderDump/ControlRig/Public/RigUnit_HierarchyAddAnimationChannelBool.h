#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddAnimationChannelBool.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool MaximumValue;
    
    FRigUnit_HierarchyAddAnimationChannelBool();
};

