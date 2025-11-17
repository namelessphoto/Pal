#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETriggerState.h"
#include "ETriggerType.h"
#include "InputActionValue.h"
#include "InputTrigger.generated.h"

class UEnhancedPlayerInput;

UCLASS(Abstract, Blueprintable, CollapseCategories, ConfigDoNotCheckDefaults, DefaultConfig, EditInlineNew, Config=Input)
class ENHANCEDINPUT_API UInputTrigger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float ActuationThreshold;
    
    UPROPERTY(BlueprintReadOnly, Config)
    bool bShouldAlwaysTick;
    
    UPROPERTY(BlueprintReadOnly)
    FInputActionValue LastValue;
    
    UInputTrigger();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETriggerState UpdateState(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsActuated(const FInputActionValue& ForValue) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    ETriggerType GetTriggerType() const;
    
};

