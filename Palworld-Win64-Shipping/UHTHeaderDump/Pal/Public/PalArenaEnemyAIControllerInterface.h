#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalArenaEnemyAIControllerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalArenaEnemyAIControllerInterface : public UInterface {
    GENERATED_BODY()
};

class IPalArenaEnemyAIControllerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInBattle();
    
};

