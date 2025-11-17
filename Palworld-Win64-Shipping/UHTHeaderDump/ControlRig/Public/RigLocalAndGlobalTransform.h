#pragma once
#include "CoreMinimal.h"
#include "RigComputedTransform.h"
#include "RigLocalAndGlobalTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigLocalAndGlobalTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigComputedTransform Local;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigComputedTransform Global;
    
    FRigLocalAndGlobalTransform();
};

