#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "PalWorldSaveData.h"
#include "PalWorldSaveGame.generated.h"

UCLASS()
class PAL_API UPalWorldSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    int32 Revision;
    
    UPROPERTY()
    bool bSavedUsingMod;
    
    UPROPERTY()
    FPalWorldSaveData worldSaveData;
    
    UPalWorldSaveGame();

};

