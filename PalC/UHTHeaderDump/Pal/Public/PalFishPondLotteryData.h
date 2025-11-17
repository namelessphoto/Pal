#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFishPondLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishPondLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LotteryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharacterID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CharacterLevelMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CharacterLevelMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GainItemLotteryName;
    
    PAL_API FPalFishPondLotteryData();
};

