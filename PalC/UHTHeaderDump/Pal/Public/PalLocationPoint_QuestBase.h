#pragma once
#include "CoreMinimal.h"
#include "PalLocationPoint.h"
#include "PalLocationPoint_QuestBase.generated.h"

UCLASS()
class PAL_API UPalLocationPoint_QuestBase : public UPalLocationPoint {
    GENERATED_BODY()
public:
    UPalLocationPoint_QuestBase();

    UFUNCTION(BlueprintPure)
    FName GetQuestId() const;
    
};

