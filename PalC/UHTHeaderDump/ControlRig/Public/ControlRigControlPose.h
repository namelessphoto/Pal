#pragma once
#include "CoreMinimal.h"
#include "RigControlCopy.h"
#include "ControlRigControlPose.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigControlPose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigControlCopy> CopyOfControls;
    
    FControlRigControlPose();
};

