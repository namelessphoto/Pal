#pragma once
#include "CoreMinimal.h"
#include "EPalTutorialTriggerConditionType.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_Capture.generated.h"

UCLASS()
class PAL_API UPalTutorialTrigger_Capture : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EPalTutorialTriggerConditionType TriggerType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TriggerCount;
    
    UPalTutorialTrigger_Capture();

};

