#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_RecipeTechnologyData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CheckTechnology.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_CheckTechnology : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_RecipeTechnologyData RequireTechnologyName;
    
public:
    UPalQuestBlock_CheckTechnology();

protected:
    UFUNCTION()
    void OnUnlockedAnyTechnology();
    
};

