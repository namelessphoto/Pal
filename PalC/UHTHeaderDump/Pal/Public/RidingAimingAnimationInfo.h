#pragma once
#include "CoreMinimal.h"
#include "RidingAimingAnimationInfo.generated.h"

class UAimOffsetBlendSpace;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FRidingAimingAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* ShootingAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAimOffsetBlendSpace* ShootingAO;
    
    PAL_API FRidingAimingAnimationInfo();
};

