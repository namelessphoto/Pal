#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalPalDisplayCategory.h"
#include "PalDisplayRequestData_DataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPalDisplayRequestData_DataAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPalDisplayCategory RequestCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequestPalID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString RewardItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExpBonusLevel;
    
    PAL_API FPalDisplayRequestData_DataAsset();
};

