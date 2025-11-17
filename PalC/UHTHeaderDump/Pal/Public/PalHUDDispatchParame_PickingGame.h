#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParame_PickingGame.generated.h"

class UPalPickingGameProcessor;

UCLASS(BlueprintType)
class UPalHUDDispatchParame_PickingGame : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPalPickingGameProcessor* Procesor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OutResult;
    
    UPalHUDDispatchParame_PickingGame();

};

