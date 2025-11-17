#pragma once
#include "CoreMinimal.h"
#include "EPalWorkDefenseCombatType.h"
#include "PalWorkBase.h"
#include "Templates/SubclassOf.h"
#include "PalWorkDefense.generated.h"

class UPalAIActionBaseCampDefenseBase;
class UPalActionBase;
class UPalMapObjectDefenseBulletLauncherModel;
class UPalMapObjectDefenseModelBase;

UCLASS()
class UPalWorkDefense : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseAIActionClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UPalActionBase> DefenseWaitActionClass;
    
    UPROPERTY(Transient)
    EPalWorkDefenseCombatType DefenseCombatType;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPalMapObjectDefenseModelBase> WeakDefenseModel;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UPalMapObjectDefenseBulletLauncherModel> WeakDefenseBulletLauncherModel;
    
public:
    UPalWorkDefense();

};

