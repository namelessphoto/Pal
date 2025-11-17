#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRaidBossSummon.generated.h"

UCLASS()
class PAL_API UPalMapObjectRaidBossSummon : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRaidBossSummonDelegate);
    
private:
    UPROPERTY()
    FGuid SummonRequestPlayerUId;
    
public:
    UPalMapObjectRaidBossSummon();

private:
    UFUNCTION()
    void RequestSummonRaidBoss_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION()
    void OnReceiveConfirmSummonRaidBossResult(const bool bResult);
    
};

