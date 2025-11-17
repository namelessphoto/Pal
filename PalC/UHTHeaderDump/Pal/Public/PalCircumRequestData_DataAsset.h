#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalItemRequireCategory.h"
#include "PalCircumRequestData_DataAsset.generated.h"

USTRUCT(BlueprintType)
struct FPalCircumRequestData_DataAsset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalItemRequireCategory RequestCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequestItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequestNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString RewardItemString;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExpBonusLevel;
    
    PAL_API FPalCircumRequestData_DataAsset();
};

