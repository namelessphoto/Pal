#pragma once
#include "CoreMinimal.h"
#include "EPalWazaCategory.h"
#include "PalEachDamageRactionInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalEachDamageRactionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsBlow;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsLeanBackAnime;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsStan;
    
    UPROPERTY(BlueprintReadOnly)
    EPalWazaCategory WazaCategory;
    
    PAL_API FPalEachDamageRactionInfo();
};

