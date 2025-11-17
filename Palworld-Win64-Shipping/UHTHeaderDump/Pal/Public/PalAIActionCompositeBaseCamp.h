#pragma once
#include "CoreMinimal.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalAIActionCompositeBase.h"
#include "PalAIActionCompositeBaseCamp.generated.h"

UCLASS()
class UPalAIActionCompositeBaseCamp : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WalkSpeedDefault;
    
public:
    UPalAIActionCompositeBaseCamp();

    UFUNCTION(BlueprintCallable)
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionToWorker();
    
};

