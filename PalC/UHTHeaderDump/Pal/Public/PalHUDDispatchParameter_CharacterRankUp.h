#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterRankUp.generated.h"

class UPalMapObjectRankUpCharacterModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_CharacterRankUp : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectRankUpCharacterModel* ConcreteModel;
    
    UPalHUDDispatchParameter_CharacterRankUp();

};

