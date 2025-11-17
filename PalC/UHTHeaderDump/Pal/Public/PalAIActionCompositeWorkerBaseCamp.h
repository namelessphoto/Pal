#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeOrderCommandInterface.h"
#include "PalAIActionCompositeWorker.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionCompositeWorkerBaseCamp.generated.h"

class UPalAIActionBaseCampDefenseBase;
class UPalAIActionCombatBase;

UCLASS()
class UPalAIActionCompositeWorkerBaseCamp : public UPalAIActionCompositeWorker, public IPalAIActionCompositeOrderCommandInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionCombatBase> CombatActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseActionClass;
    
public:
    UPalAIActionCompositeWorkerBaseCamp();


    // Fix for true pure virtual functions not being implemented
};

