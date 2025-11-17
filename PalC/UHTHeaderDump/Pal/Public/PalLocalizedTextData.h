#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalLocalizedTextData.generated.h"

USTRUCT(BlueprintType)
struct FPalLocalizedTextData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TextData;
    
    PAL_API FPalLocalizedTextData();
};

