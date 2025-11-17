#pragma once
#include "CoreMinimal.h"
#include "InputComboStepData.h"
#include "InputTrigger.h"
#include "InputTriggerCombo.generated.h"

class UInputAction;

UCLASS(CollapseCategories, EditInlineNew)
class ENHANCEDINPUT_API UInputTriggerCombo : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentComboStepIndex;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentTimeBetweenComboSteps;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FInputComboStepData> ComboActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UInputAction*> CancelActions;
    
    UInputTriggerCombo();

};

