#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalWorldBaseInfoSaveData.h"
#include "PalWorldBaseInfoSaveGame.generated.h"

UCLASS()
class PAL_API UPalWorldBaseInfoSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FPalWorldBaseInfoSaveData SaveData;
    
    UPalWorldBaseInfoSaveGame();

};

