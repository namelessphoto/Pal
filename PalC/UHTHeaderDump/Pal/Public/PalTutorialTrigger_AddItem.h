#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeB.h"
#include "PalTutorialTriggerBase.h"
#include "PalTutorialTrigger_AddItem.generated.h"

UCLASS()
class PAL_API UPalTutorialTrigger_AddItem : public UPalTutorialTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> StaticItemIds;
    
    UPROPERTY(BlueprintReadWrite)
    EPalItemTypeB ItemCategory;
    
    UPROPERTY(BlueprintReadWrite)
    FName BuildObjectId;
    
    UPalTutorialTrigger_AddItem();

};

