#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERoundingMode -FallbackName=ERoundingMode
#include "CommonNumberFormattingOptions.generated.h"

USTRUCT(BlueprintType)
struct COMMONUI_API FCommonNumberFormattingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ERoundingMode> RoundingMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseGrouping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinimumIntegralDigits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaximumIntegralDigits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinimumFractionalDigits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaximumFractionalDigits;
    
    FCommonNumberFormattingOptions();
};

