#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDungeonGimmickTriggerTargetInterface.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_BulletLauncher.generated.h"

class APalStationaryLauncherBase;

UCLASS()
class PAL_API APalDungeonGimmick_BulletLauncher : public APalDungeonLevelGimmickBase, public IPalDungeonGimmickTriggerTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bAutoTriggerOnBeginPlay;
    
    UPROPERTY(EditInstanceOnly)
    FGuid TriggerId;
    
    UPROPERTY(EditAnywhere)
    float LaunchInterval;
    
    UPROPERTY(EditAnywhere)
    bool bLaunchInfinitely;
    
    UPROPERTY(EditAnywhere)
    int32 LaunchCount;
    
public:
    APalDungeonGimmick_BulletLauncher(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    APalStationaryLauncherBase* GetLauncher() const;
    

    // Fix for true pure virtual functions not being implemented
};

