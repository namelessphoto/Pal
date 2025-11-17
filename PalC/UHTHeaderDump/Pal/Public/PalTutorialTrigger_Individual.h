#pragma once
#include "CoreMinimal.h"
#include "EPalTutorialTriggerConditionType.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_Individual.generated.h"

UCLASS()
class PAL_API UPalTutorialTrigger_Individual : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EPalTutorialTriggerConditionType TriggerType;
    
    UPalTutorialTrigger_Individual();

};

