#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalBoundsTransform.generated.h"

USTRUCT(BlueprintType)
struct FPalBoundsTransform {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FVector Location;
    
    UPROPERTY(VisibleInstanceOnly)
    FQuat Rotation;
    
    UPROPERTY(VisibleInstanceOnly)
    FBoxSphereBounds Bounds;
    
    PAL_API FPalBoundsTransform();
};

