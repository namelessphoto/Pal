#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "PalEnemyCampTreasureBoxItemInfo.h"
#include "PalEnemyCampStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalEnemyCampStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bIsSpawned;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsEnemyAllDead;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsClear;
    
    UPROPERTY(BlueprintReadWrite)
    bool bRewardReceived;
    
    UPROPERTY(BlueprintReadWrite)
    FName RewardPalId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 RewardPalLevel;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime ClearDate;
    
    UPROPERTY(BlueprintReadWrite)
    float ElapsedTime;
    
    UPROPERTY(Transient)
    FDateTime LastCalcDate;
    
    UPROPERTY()
    TMap<FName, FPalEnemyCampTreasureBoxItemInfo> TreasureBoxInfoMapBySpawnerName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CampPresetIndex;
    
    PAL_API FPalEnemyCampStatus();
};

