#pragma once
#include "CoreMinimal.h"
#include "RigControl.h"
#include "RigControlHierarchy.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigControlHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FRigControl> Controls;
    
public:
    FRigControlHierarchy();
};

