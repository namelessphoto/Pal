#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PalRecordCountRewardData.h"
#include "PalAchivementRewardDataAsset.generated.h"

UCLASS(BlueprintType)
class PAL_API UPalAchivementRewardDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FName, FPalRecordCountRewardData> BossDefeatRewardsMap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FName, FPalRecordCountRewardData> PalCaptureRewardsMap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<FName, FPalRecordCountRewardData> PaldexRewardsMap;
    
    UPalAchivementRewardDataAsset();

    UFUNCTION(BlueprintCallable)
    void Build();
    
};

