#pragma once
#include "CoreMinimal.h"
#include "InputTriggerTimedBase.h"
#include "InputTriggerPulse.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UInputTriggerPulse : public UInputTriggerTimedBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bTriggerOnStart;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 TriggerLimit;
    
    UInputTriggerPulse();

};

