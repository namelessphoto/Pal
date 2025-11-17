#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_FramesToSeconds.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_FramesToSeconds : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Frames;
    
    UPROPERTY(BlueprintReadOnly)
    float Seconds;
    
    FRigUnit_FramesToSeconds();
};

