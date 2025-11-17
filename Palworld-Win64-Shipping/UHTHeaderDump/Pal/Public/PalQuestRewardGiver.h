#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalQuestRewardGiver.generated.h"

UCLASS()
class PAL_API UPalQuestRewardGiver : public UObject {
    GENERATED_BODY()
public:
    UPalQuestRewardGiver();

    UFUNCTION()
    void TakeReward(const FGuid& PlayerUId);
    
};

