#pragma once
#include "CoreMinimal.h"
#include "InputTrigger.h"
#include "InputTriggerTimedBase.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class ENHANCEDINPUT_API UInputTriggerTimedBase : public UInputTrigger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float HeldDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bAffectedByTimeDilation;
    
    UInputTriggerTimedBase();

};

