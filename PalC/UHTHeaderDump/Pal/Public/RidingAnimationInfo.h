#pragma once
#include "CoreMinimal.h"
#include "RidingAnimationInfo.generated.h"

class UAimOffsetBlendSpace;
class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct FRidingAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* RidingAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* RidingShakingMontage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequence* RideShootingAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAimOffsetBlendSpace* RideShootingAO;
    
    PAL_API FRidingAnimationInfo();
};

