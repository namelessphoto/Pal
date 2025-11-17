#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CutsceneOverlay.generated.h"

class UPalCutsceneComponent;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_CutsceneOverlay : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPalCutsceneComponent* CutsceneComponent;
    
    UPalHUDDispatchParameter_CutsceneOverlay();

};

