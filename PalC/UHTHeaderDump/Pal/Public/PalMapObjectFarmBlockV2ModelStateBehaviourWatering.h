#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourBase.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourWatering.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS()
class UPalMapObjectFarmBlockV2ModelStateBehaviourWatering : public UPalMapObjectFarmBlockV2ModelStateBehaviourBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateWaterStackRateDelegate, float, WaterStackRate);
    
    UPalMapObjectFarmBlockV2ModelStateBehaviourWatering();

private:
    UFUNCTION()
    void OnProgressWorkInServer(UPalWorkProgress* WorkProgress);
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
};

