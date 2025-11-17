#pragma once
#include "CoreMinimal.h"
#include "PalGrapplingGunInitParameter.generated.h"

class APalCharacter;

USTRUCT(BlueprintType)
struct FPalGrapplingGunInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float CableShootSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float CableReturnSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float CableMaxLength;
    
    UPROPERTY(BlueprintReadWrite)
    float CharacterMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float NearCoolTimeDistance;
    
    UPROPERTY(BlueprintReadWrite)
    float NearCoolTimeRate;
    
    UPROPERTY(BlueprintReadWrite)
    APalCharacter* ActionCharacter;
    
    PAL_API FPalGrapplingGunInitParameter();
};

