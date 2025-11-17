#pragma once
#include "CoreMinimal.h"
#include "PalRaidAchievementData.generated.h"

USTRUCT()
struct FPalRaidAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StaticItemName;
    
    UPROPERTY()
    FString AchievementId;
    
    UPROPERTY()
    TArray<FName> CharacterIDList;
    
    PAL_API FPalRaidAchievementData();
};

