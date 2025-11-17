#pragma once
#include "CoreMinimal.h"
#include "ETriggerEvent.h"
#include "InputActionInstance.generated.h"

class UInputAction;
class UInputModifier;
class UInputTrigger;

USTRUCT(BlueprintType)
struct ENHANCEDINPUT_API FInputActionInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    UInputAction* SourceAction;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ETriggerEvent TriggerEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LastTriggeredWorldTime;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UInputTrigger*> Triggers;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UInputModifier*> Modifiers;
    
    UPROPERTY(BlueprintReadOnly)
    float ElapsedProcessedTime;
    
    UPROPERTY(BlueprintReadOnly)
    float ElapsedTriggeredTime;
    
public:
    FInputActionInstance();
};

