#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalWorldPlayerSaveData.h"
#include "PalWorldPlayerSaveGame.generated.h"

UCLASS()
class PAL_API UPalWorldPlayerSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FPalWorldPlayerSaveData SaveData;
    
    UPalWorldPlayerSaveGame();

};

