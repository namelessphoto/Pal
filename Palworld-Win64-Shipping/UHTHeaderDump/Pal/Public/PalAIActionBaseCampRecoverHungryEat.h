#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampRecoverHungryChildBase.h"
#include "PalAIActionBaseCampRecoverHungryEat.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalAIActionBaseCampRecoverHungryEat : public UPalAIActionBaseCampRecoverHungryChildBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float EatTime;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnSpeed;
    
public:
    UPalAIActionBaseCampRecoverHungryEat();

private:
    UFUNCTION()
    void OnFinishEatingTime();
    
};

