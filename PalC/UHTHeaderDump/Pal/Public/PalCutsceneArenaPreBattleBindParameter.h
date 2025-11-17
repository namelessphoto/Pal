#pragma once
#include "CoreMinimal.h"
#include "PalCutsceneBindParameter.h"
#include "PalCutsceneArenaPreBattleBindParameter.generated.h"

class APalArenaPreBattleCutsceneEvent;

UCLASS(BlueprintType)
class UPalCutsceneArenaPreBattleBindParameter : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    APalArenaPreBattleCutsceneEvent* PreBattleEvent;
    
    UPalCutsceneArenaPreBattleBindParameter();

};

