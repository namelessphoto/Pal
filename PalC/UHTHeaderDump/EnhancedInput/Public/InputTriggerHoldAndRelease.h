#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerHoldAndRelease.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float HoldTimeThreshold;
    
    UInputTriggerHoldAndRelease();

};

