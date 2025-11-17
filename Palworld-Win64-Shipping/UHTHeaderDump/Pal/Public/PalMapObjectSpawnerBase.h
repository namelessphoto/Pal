#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectSpawnerState.h"
#include "PalLevelObjectActor.h"
#include "PalStageInstanceId.h"
#include "PalMapObjectSpawnerBase.generated.h"

class USphereComponent;

UCLASS(Abstract)
class PAL_API APalMapObjectSpawnerBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 ProbabilityRespawn;
    
    UPROPERTY(EditAnywhere)
    float LotteryCoolTimeMinutes;
    
    UPROPERTY(EditAnywhere)
    bool bAdjustMapObjectToFloor;
    
    UPROPERTY(EditInstanceOnly)
    bool bDebugBreakPointTryRespawnFor;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetSpawnedObjectTransformAtActivated;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalStageInstanceId StageInstanceIdBelongTo;
    
    UPROPERTY(Instanced, VisibleInstanceOnly)
    USphereComponent* LocateSphere;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalMapObjectSpawnerState State;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName OverrideSpawnerLevelDataLayerAppendName;
    
public:
    APalMapObjectSpawnerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWorldMapObjectSpawnableInServer();
    
};

