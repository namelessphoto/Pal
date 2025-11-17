#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalGlobalPalStorageSaveParameter.h"
#include "PalGlobalPalStorageSaveGame.generated.h"

UCLASS()
class PAL_API UPalGlobalPalStorageSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalGlobalPalStorageSaveParameter> SaveParameterArray;
    
    UPalGlobalPalStorageSaveGame();

};

