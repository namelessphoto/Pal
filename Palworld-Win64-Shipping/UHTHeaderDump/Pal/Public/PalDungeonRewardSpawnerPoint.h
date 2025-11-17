#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonRewardSpawnerType.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonRewardSpawnerPoint.generated.h"

class UPalDungeonRewardSpawnerPointBehaviour;

UCLASS()
class PAL_API APalDungeonRewardSpawnerPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EPalDungeonRewardSpawnerType RewardSpawnerType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalDungeonRewardSpawnerPointBehaviour* Behaviour;
    
public:
    APalDungeonRewardSpawnerPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void CheckLevelStreamingCompleted_ServerInternal();
    
};

