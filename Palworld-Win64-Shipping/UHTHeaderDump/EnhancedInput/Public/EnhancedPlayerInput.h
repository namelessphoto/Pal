#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "EnhancedActionKeyMapping.h"
#include "InjectedInputArray.h"
#include "InputActionInstance.h"
#include "EnhancedPlayerInput.generated.h"

class UInputAction;
class UInputMappingContext;

UCLASS(NonTransient)
class ENHANCEDINPUT_API UEnhancedPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UInputMappingContext*, int32> AppliedInputContexts;
    
    UPROPERTY(Transient)
    TArray<FEnhancedActionKeyMapping> EnhancedActionMappings;
    
    UPROPERTY(Transient)
    TMap<UInputAction*, FInputActionInstance> ActionInstanceData;
    
    UPROPERTY(Transient)
    TMap<FKey, FVector> KeysPressedThisTick;
    
    UPROPERTY(Transient)
    TMap<UInputAction*, FInjectedInputArray> InputsInjectedThisTick;
    
    UPROPERTY(Transient)
    TSet<UInputAction*> LastInjectedActions;
    
public:
    UEnhancedPlayerInput();

};

