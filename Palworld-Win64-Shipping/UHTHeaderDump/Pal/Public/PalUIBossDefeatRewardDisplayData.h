#pragma once
#include "CoreMinimal.h"
#include "PalUIBossDefeatRewardDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIBossDefeatRewardDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TechnologyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DefeatCharacterID;
    
    PAL_API FPalUIBossDefeatRewardDisplayData();
};

