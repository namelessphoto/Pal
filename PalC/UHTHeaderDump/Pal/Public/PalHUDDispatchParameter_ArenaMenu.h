#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ArenaMenu.generated.h"

class APalArenaEntrance;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_ArenaMenu : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    APalArenaEntrance* Entrance;
    
    UPalHUDDispatchParameter_ArenaMenu();

};

