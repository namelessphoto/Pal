#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "PalNPCMultiTalkRow.generated.h"

class UPalNPCMultiTalkHandle;

USTRUCT(BlueprintType)
struct FPalNPCMultiTalkRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalNPCMultiTalkHandle> MultiTalkHandleClass;
    
    PAL_API FPalNPCMultiTalkRow();
};

