#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "PalAIActionBase.h"
#include "PalAIActionBaseCampTrantrum.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalAIActionBaseCampTrantrum : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float Duration;
    
    UPROPERTY(EditDefaultsOnly)
    float RadiusAttackTo;
    
    UPROPERTY(EditDefaultsOnly)
    FInt32Interval AttackNumRange;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnSpeedToAttack;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid AttackTargetMapObjectInstanceId;
    
public:
    UPalAIActionBaseCampTrantrum();

};

