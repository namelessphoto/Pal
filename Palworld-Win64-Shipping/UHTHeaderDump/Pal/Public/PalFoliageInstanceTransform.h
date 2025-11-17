#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalFoliageInstanceTransform.generated.h"

USTRUCT(BlueprintType)
struct FPalFoliageInstanceTransform {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FVector Location;
    
    UPROPERTY(VisibleInstanceOnly)
    FRotator Rotator;
    
    UPROPERTY(VisibleInstanceOnly)
    float ScaleX;
    
    PAL_API FPalFoliageInstanceTransform();
};

