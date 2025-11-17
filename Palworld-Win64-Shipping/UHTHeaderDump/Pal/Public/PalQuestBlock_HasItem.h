#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalDataTableRowName_ItemData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_HasItem.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_HasItem : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, int32> RequireItemMap;
    
private:
    UPROPERTY()
    FTimerHandle CheckTimerHandle;
    
public:
    UPalQuestBlock_HasItem();

private:
    UFUNCTION()
    void CheckItem();
    
};

