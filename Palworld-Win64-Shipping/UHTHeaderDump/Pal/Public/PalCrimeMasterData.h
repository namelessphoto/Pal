#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCrimeMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalCrimeMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CrimeNameTextId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseReward;
    
    PAL_API FPalCrimeMasterData();
};

