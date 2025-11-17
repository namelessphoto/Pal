#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionPalStorageSaveGame.generated.h"

UCLASS()
class PAL_API UPalDimensionPalStorageSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalDimensionPalStorageSaveParameter> SaveParameterArray;
    
    UPalDimensionPalStorageSaveGame();

};

