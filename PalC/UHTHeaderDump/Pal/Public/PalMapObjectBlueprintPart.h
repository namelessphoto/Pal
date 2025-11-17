#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalMapObjectBlueprintPart.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectBlueprintPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName MapObjectId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator RotationOffset;
    
    PAL_API FPalMapObjectBlueprintPart();
};

