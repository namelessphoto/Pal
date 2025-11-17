#pragma once
#include "CoreMinimal.h"
#include "PalOnCharacterCompleteInitializeParameterDelegate.generated.h"

class APalCharacter;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPalOnCharacterCompleteInitializeParameter, APalCharacter*, InCharacter);

