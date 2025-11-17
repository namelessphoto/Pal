#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalStaticCharacterInfo_SleepOnSide.generated.h"

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_SleepOnSide {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector LocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator RotatorOffset;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShouldApply;
    
    PAL_API FPalStaticCharacterInfo_SleepOnSide();
};

