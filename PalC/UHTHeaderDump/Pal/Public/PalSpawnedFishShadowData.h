#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalFishBattleBehaviorType.h"
#include "EPalFishingSpotDifficultyType.h"
#include "EPalOneDayTimeType.h"
#include "PalFishShadowDataRow.h"
#include "PalFishSpawnPointData.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalSpawnedFishShadowData.generated.h"

USTRUCT(BlueprintType)
struct FPalSpawnedFishShadowData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalFishShadowDataRow FishShadowData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalFishSpawnPointData SpawnPointData;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid SpawnedFishUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalOneDayTimeType OnlyTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName ItemLotteryName;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalFishBattleBehaviorType BehaviorType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float Difficulty;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid RequestPlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float DecreaseDurability;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName FishingDataRowId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalFishingSpotDifficultyType FishingSpotDifficulty;
    
    PAL_API FPalSpawnedFishShadowData();
};

