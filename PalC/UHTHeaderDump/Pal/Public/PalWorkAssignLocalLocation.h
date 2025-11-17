#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalWorkAssignLocalLocation.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignLocalLocation {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    FVector Location;
    
    UPROPERTY(NotReplicated, VisibleInstanceOnly)
    FVector FacingDirection;
    
    PAL_API FPalWorkAssignLocalLocation();
};

