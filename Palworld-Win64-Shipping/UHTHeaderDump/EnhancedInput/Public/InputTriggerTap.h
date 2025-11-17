#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerTap.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputTriggerTap : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float TapReleaseTimeThreshold;
    
    UInputTriggerTap();

};

