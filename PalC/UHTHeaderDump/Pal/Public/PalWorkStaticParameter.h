#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBoundsTransform.h"
#include "PalWorkAssignLocalLocation.h"
#include "PalWorkStaticParameter.generated.h"

USTRUCT()
struct FPalWorkStaticParameter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectModelId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid OwnerMapObjectConcreteModelId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalBoundsTransform WorkableBounds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalWorkAssignLocalLocation> AssignLocalLocations;
    
    PAL_API FPalWorkStaticParameter();
};

