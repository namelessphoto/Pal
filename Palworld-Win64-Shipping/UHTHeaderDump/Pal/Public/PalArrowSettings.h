#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "PalArrowSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalArrowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UPROPERTY(EditAnywhere)
    float Size;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    PAL_API FPalArrowSettings();
};

