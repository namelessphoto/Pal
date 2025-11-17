#pragma once
#include "CoreMinimal.h"
#include "PalDungeonRewardSpawnerContent.h"
#include "PalDungeonRewardSpawnerContent_Cage.generated.h"

UCLASS()
class PAL_API UPalDungeonRewardSpawnerContent_Cage : public UPalDungeonRewardSpawnerContent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName CharacterID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 Level;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bObtained;
    
public:
    UPalDungeonRewardSpawnerContent_Cage();

};

