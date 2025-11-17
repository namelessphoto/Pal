#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Templates/SubclassOf.h"
#include "PalAIControllerWorkerInterface.generated.h"

class UPalAIControllerWorkerModule;

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAIControllerWorkerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAIControllerWorkerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UPalAIControllerWorkerModule> GetWorkerModuleClass();
    
};

