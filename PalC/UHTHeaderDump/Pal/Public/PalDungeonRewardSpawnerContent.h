#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalDungeonRewardSpawnerContent.generated.h"

UCLASS(Abstract)
class PAL_API UPalDungeonRewardSpawnerContent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName RewardLotteryId;
    
public:
    UPalDungeonRewardSpawnerContent();

};

