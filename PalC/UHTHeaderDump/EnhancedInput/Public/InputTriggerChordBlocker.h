#pragma once
#include "CoreMinimal.h"
#include "InputTriggerChordAction.h"
#include "InputTriggerChordBlocker.generated.h"

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, MinimalAPI)
class UInputTriggerChordBlocker : public UInputTriggerChordAction {
    GENERATED_BODY()
public:
    UInputTriggerChordBlocker();

};

