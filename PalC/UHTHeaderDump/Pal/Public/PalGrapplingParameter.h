#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalGrapplingParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalGrapplingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector MoveEndLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector HitNormal;
    
    UPROPERTY(BlueprintReadWrite)
    FVector StartVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    float ElapsedTime;
    
    PAL_API FPalGrapplingParameter();
};

