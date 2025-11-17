#pragma once
#include "CoreMinimal.h"
#include "RigLocalAndGlobalTransform.h"
#include "RigCurrentAndInitialTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigCurrentAndInitialTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigLocalAndGlobalTransform Current;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRigLocalAndGlobalTransform Initial;
    
    FRigCurrentAndInitialTransform();
};

