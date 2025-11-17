#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalDamageRactionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDamageRactionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool IsBlow;
    
    UPROPERTY(BlueprintReadOnly)
    FVector BlowVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLeanBackAnime;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsStan;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLargeDown;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    PAL_API FPalDamageRactionInfo();
};

