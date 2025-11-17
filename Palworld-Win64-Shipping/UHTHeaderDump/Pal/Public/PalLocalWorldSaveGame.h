#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalLocalSaveData.h"
#include "PalLocalWorldSaveGame.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalLocalWorldSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY(BlueprintReadOnly)
    FPalLocalSaveData SaveData;
    
    UPalLocalWorldSaveGame();

};

