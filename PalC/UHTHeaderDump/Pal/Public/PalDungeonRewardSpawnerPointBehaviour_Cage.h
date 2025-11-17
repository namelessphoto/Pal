#pragma once
#include "CoreMinimal.h"
#include "PalDungeonRewardSpawnerPointBehaviour.h"
#include "PalDungeonRewardSpawnerPointBehaviour_Cage.generated.h"

class APalCapturedCage;

UCLASS()
class PAL_API UPalDungeonRewardSpawnerPointBehaviour_Cage : public UPalDungeonRewardSpawnerPointBehaviour {
    GENERATED_BODY()
public:
    UPalDungeonRewardSpawnerPointBehaviour_Cage();

protected:
    UFUNCTION()
    void OnObtainedCharacter_ServerInternal(APalCapturedCage* CapturedCage);
    
};

