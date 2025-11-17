#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonBorderStyle.generated.h"

UCLASS(Abstract, BlueprintType)
class COMMONUI_API UCommonBorderStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSlateBrush Background;
    
    UCommonBorderStyle();

    UFUNCTION(BlueprintPure)
    void GetBackgroundBrush(FSlateBrush& Brush) const;
    
};

