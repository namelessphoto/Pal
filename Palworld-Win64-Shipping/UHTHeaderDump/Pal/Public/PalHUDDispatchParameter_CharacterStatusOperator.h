#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationResult.h"
#include "PalCharacterStatusOperationResultSingleDelegateDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterStatusOperator.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_CharacterStatusOperator : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPalHUDDispatchParameter_CharacterStatusOperator();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCharacterStatusOperationResultText(const UObject* WorldContextObject, const EPalCharacterStatusOperationResult Type, FText& OutText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void BindReceiveRequestResultDelegate(const UObject* WorldContextObject, FPalCharacterStatusOperationResultSingleDelegate Delegate);
    
};

