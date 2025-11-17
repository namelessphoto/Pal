#pragma once
#include "CoreMinimal.h"
#include "PalOrderedQuestSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalOrderedQuestSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName QuestName;
    
    UPROPERTY()
    int32 BlockIndex;
    
    UPROPERTY()
    TMap<FName, int32> IntegerMap;
    
    UPROPERTY()
    TMap<FName, FString> StringMap;
    
    PAL_API FPalOrderedQuestSaveData();
};

