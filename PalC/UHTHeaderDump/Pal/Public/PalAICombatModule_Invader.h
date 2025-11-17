#pragma once
#include "CoreMinimal.h"
#include "PalAICombatModule.h"
#include "PalAICombatModule_Invader.generated.h"

class AActor;

UCLASS()
class PAL_API UPalAICombatModule_Invader : public UPalAICombatModule {
    GENERATED_BODY()
public:
    UPalAICombatModule_Invader();

    UFUNCTION()
    void OnBattleFinish_forDelegate(AActor* Actor);
    
};

