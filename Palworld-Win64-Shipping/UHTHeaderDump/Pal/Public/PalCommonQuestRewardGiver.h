#pragma once
#include "CoreMinimal.h"
#include "PalCommonQuestRewardData.h"
#include "PalQuestRewardGiver.h"
#include "PalCommonQuestRewardGiver.generated.h"

UCLASS()
class PAL_API UPalCommonQuestRewardGiver : public UPalQuestRewardGiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPalCommonQuestRewardData RewardData;
    
public:
    UPalCommonQuestRewardGiver();

    UFUNCTION()
    void SetCommonRewardData(FPalCommonQuestRewardData InRewardList);
    
};

