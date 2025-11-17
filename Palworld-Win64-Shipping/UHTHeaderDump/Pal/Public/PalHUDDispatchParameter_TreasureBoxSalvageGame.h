#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_TreasureBoxSalvageGame.generated.h"

class UPalUIMapObjectTreasureBoxSalvageGameModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_TreasureBoxSalvageGame : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalUIMapObjectTreasureBoxSalvageGameModel* Model;
    
    UPalHUDDispatchParameter_TreasureBoxSalvageGame();

};

