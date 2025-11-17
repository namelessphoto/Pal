#pragma once
#include "CoreMinimal.h"
#include "PalStateMachine.h"
#include "PalMapObjectFarmSkillFruitsModelStateBehaviourMachine.generated.h"

class UPalMapObjectFarmSkillFruitsModelStateBehaviourBase;

UCLASS()
class UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine : public UPalStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPalMapObjectFarmSkillFruitsModelStateBehaviourBase* CurrentStateBehaviourCache;
    
public:
    UPalMapObjectFarmSkillFruitsModelStateBehaviourMachine();

};

