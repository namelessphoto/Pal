#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourBase.h"
#include "PalMapObjectFarmBlockV2ModelStateBehaviourSeeding.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS()
class UPalMapObjectFarmBlockV2ModelStateBehaviourSeeding : public UPalMapObjectFarmBlockV2ModelStateBehaviourBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateProgressRateDelegate, float, ProgressRate);
    
    UPalMapObjectFarmBlockV2ModelStateBehaviourSeeding();

private:
    UFUNCTION()
    void OnProgressWork(UPalWorkProgress* WorkProgress);
    
    UFUNCTION()
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
};

