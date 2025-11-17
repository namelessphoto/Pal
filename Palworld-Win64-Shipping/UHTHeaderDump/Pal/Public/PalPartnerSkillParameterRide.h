#pragma once
#include "CoreMinimal.h"
#include "PalPartnerSkillParameterRide.generated.h"

USTRUCT(BlueprintType)
struct FPalPartnerSkillParameterRide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float JumpZVelocityScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GravityScale;
    
    PAL_API FPalPartnerSkillParameterRide();
};

