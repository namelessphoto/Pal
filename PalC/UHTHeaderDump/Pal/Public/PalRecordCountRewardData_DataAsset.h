#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalAchivementCategory.h"
#include "PalRecordCountRewardData_DataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPalRecordCountRewardData_DataAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAchivementCategory AchivementCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString RewardItemString;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExpBonusLevel;
    
    PAL_API FPalRecordCountRewardData_DataAsset();
};

