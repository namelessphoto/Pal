#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFarmSkillFruitsModelStateBehaviourBase.h"
#include "PalMapObjectFarmSkillFruitsModelStateBehaviourWatering.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS()
class UPalMapObjectFarmSkillFruitsModelStateBehaviourWatering : public UPalMapObjectFarmSkillFruitsModelStateBehaviourBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateWaterStackRateDelegate, float, WaterStackRate);
    
    UPalMapObjectFarmSkillFruitsModelStateBehaviourWatering();

private:
    UFUNCTION()
    void OnProgressWorkInServer(UPalWorkProgress* WorkProgress);
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
};

