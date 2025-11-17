#pragma once
#include "CoreMinimal.h"
#include "EPalWorkType.h"
#include "PalAIActionWorkerChildBase.h"
#include "PalAIActionWorkerWorking.generated.h"

UCLASS(EditInlineNew)
class UPalAIActionWorkerWorking : public UPalAIActionWorkerChildBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalWorkType CurrentWorkType;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnSpeedToTarget;
    
public:
    UPalAIActionWorkerWorking();

};

