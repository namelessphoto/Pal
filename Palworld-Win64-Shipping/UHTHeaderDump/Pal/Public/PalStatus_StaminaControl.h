#pragma once
#include "CoreMinimal.h"
#include "PalStatusBase.h"
#include "PalStatus_StaminaControl.generated.h"

class UPalCharacterMovementComponent;

UCLASS()
class PAL_API UPalStatus_StaminaControl : public UPalStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool IsLocalPlayerOrPal;
    
    UPROPERTY(Transient)
    bool IsPreCliming;
    
    UPROPERTY(Transient)
    bool bIsOtomo;
    
public:
    UPalStatus_StaminaControl();

private:
    UFUNCTION()
    void DecreaseStepStamina();
    
    UFUNCTION()
    void DecreaseJumpStamina(UPalCharacterMovementComponent* Movement);
    
};

