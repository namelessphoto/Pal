#pragma once
#include "CoreMinimal.h"
#include "PalCompletedQuestSaveData.generated.h"

USTRUCT()
struct FPalCompletedQuestSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName QuestName;
    
    PAL_API FPalCompletedQuestSaveData();
};

