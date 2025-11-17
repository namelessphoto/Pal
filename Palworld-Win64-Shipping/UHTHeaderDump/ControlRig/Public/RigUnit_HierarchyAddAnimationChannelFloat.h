#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddAnimationChannelFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumValue;
    
    FRigUnit_HierarchyAddAnimationChannelFloat();
};

