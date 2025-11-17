#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterDisplay.generated.h"

class UPalMapObjectDisplayCharacterModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_CharacterDisplay : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectDisplayCharacterModel* Model;
    
    UPalHUDDispatchParameter_CharacterDisplay();

};

