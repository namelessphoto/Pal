#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCharacterUpgradeMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterUpgradeMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequiredStaticItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredItemNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ResetRequiredMoney;
    
    PAL_API FPalCharacterUpgradeMasterData();
};

