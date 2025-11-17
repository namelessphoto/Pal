#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Border -FallbackName=Border
#include "Templates/SubclassOf.h"
#include "CommonBorder.generated.h"

class UCommonBorderStyle;

UCLASS(DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonBorder : public UBorder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonBorderStyle> Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReducePaddingBySafezone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin MinimumPadding;
    
    UCommonBorder();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonBorderStyle> InStyle);
    
};

