#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerHold.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputTriggerHold : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float HoldTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIsOneShot;
    
    UInputTriggerHold();

};

