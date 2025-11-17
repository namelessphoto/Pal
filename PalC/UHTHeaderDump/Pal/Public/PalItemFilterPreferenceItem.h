#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalItemFilterPreferenceItem.generated.h"

USTRUCT(BlueprintType)
struct FPalItemFilterPreferenceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle FilterTextId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalItemTypeA> TypeA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalItemTypeB> TypeB;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EPalItemTypeB> TypeB_Except;
    
    PAL_API FPalItemFilterPreferenceItem();
};

