#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDungeonGimmickTriggerTargetInterface.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmick_DamageVolume.generated.h"

class APalActivatableDamageAreaBase;

UCLASS()
class PAL_API APalDungeonGimmick_DamageVolume : public APalDungeonLevelGimmickBase, public IPalDungeonGimmickTriggerTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bAutoTriggerOnBeginPlay;
    
    UPROPERTY(EditInstanceOnly)
    FGuid TriggerId;
    
    UPROPERTY(EditAnywhere)
    float DamageValue;
    
    UPROPERTY(EditAnywhere)
    float ActiveCooldown;
    
    UPROPERTY(EditAnywhere)
    float ActiveInterval;
    
    UPROPERTY(EditAnywhere)
    bool bLaunchInfinitely;
    
public:
    APalDungeonGimmick_DamageVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    APalActivatableDamageAreaBase* GetActivatableDamageArea() const;
    

    // Fix for true pure virtual functions not being implemented
};

