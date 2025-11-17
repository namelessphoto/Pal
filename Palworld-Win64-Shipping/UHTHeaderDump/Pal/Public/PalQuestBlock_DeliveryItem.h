#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDataTableRowName_ItemData.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DeliveryItem.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_DeliveryItem : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_ItemData, int32> RequireItemMap;
    
public:
    UPalQuestBlock_DeliveryItem();

    UFUNCTION(BlueprintPure)
    bool HasItem(const FGuid& PlayerUId) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FPalDataTableRowName_ItemData, int32> GetRequireItemMap() const;
    
};

