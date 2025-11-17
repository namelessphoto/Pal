#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalCommonQuestRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPalCommonQuestRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Exp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 TechnologyPoint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, int32> Items;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> SkinNames;
    
    PAL_API FPalCommonQuestRewardData();
};

