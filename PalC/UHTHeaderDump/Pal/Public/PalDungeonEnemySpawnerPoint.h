#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonEnemySpawnerRankType.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonEnemySpawnerPoint.generated.h"

class UPalDungeonInstanceModel;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalDungeonEnemySpawnerPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnIndividualHandleDelegate, UPalIndividualCharacterHandle*, IndividualHandle);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalDungeonEnemySpawnerRankType RankType;
    
public:
    APalDungeonEnemySpawnerPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEnterCharacterToGroup(UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION()
    void OnCreatedGroup();
    
    UFUNCTION()
    void OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel);
    
    UFUNCTION()
    void CheckLevelStreamingCompleted();
    
};

