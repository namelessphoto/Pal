#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampWorkerSickType.h"
#include "FixedPoint64.h"
#include "PalFoodRegeneInfo.h"
#include "PalArenaCharacterRestoreParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaCharacterRestoreParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bValid;
    
    UPROPERTY()
    FFixedPoint64 Hp;
    
    UPROPERTY()
    float FullStomach;
    
    UPROPERTY()
    float SanityValue;
    
    UPROPERTY()
    EPalBaseCampWorkerSickType WorkerSick;
    
    UPROPERTY()
    FName FoodWithStatusEffect;
    
    UPROPERTY()
    int32 Tiemr_FoodWithStatusEffect;
    
    UPROPERTY()
    FPalFoodRegeneInfo FoodRegeneEffectInfo;
    
    PAL_API FPalArenaCharacterRestoreParameter();
};

