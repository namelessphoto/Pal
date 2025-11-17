#pragma once
#include "CoreMinimal.h"
#include "PalActionBase.h"
#include "PalActionOneShotAnimation.generated.h"

class UAnimMontage;

UCLASS()
class UPalActionOneShotAnimation : public UPalActionBase {
    GENERATED_BODY()
public:
    UPalActionOneShotAnimation();

    UFUNCTION()
    void OnEndMontage(UAnimMontage* Montage, bool bInterrupted);
    
};

