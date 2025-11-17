#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalCustomAnimOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FPalCustomAnimOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
    FVector CustomLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
    FVector CustomDirection;
    
    UPROPERTY(BlueprintReadWrite, VisibleInstanceOnly)
    FRotator CustomRotation;
    
    PAL_API FPalCustomAnimOverrideData();
};

