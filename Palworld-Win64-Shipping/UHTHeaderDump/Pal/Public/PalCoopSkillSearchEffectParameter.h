#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCoopSkillSearchEffectParameter.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPalCoopSkillSearchEffectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float RadiusFrom;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float RadiusTo;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float ExtRadiusPerSec;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float FadeOutSec;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UAkAudioEvent* Sound;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FLinearColor PulseColor;
    
    PAL_API FPalCoopSkillSearchEffectParameter();
};

