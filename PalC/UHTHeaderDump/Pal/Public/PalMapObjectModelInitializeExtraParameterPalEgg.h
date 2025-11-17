#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterPalEgg.generated.h"

UCLASS()
class UPalMapObjectModelInitializeExtraParameterPalEgg : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CharacterID;
    
    UPalMapObjectModelInitializeExtraParameterPalEgg();

};

