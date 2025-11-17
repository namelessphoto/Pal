#pragma once
#include "CoreMinimal.h"
#include "PalStaticCharacterInfo_ElectricAction.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_ElectricAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* StartLoopOverwrite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimMontage* ActionLoopOverwrite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LoopContinueSeconds;
    
    PAL_API FPalStaticCharacterInfo_ElectricAction();
};

