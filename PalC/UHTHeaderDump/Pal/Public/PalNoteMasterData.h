#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNoteMasterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalNoteMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TextId_Description;
    
    FPalNoteMasterData();
};

