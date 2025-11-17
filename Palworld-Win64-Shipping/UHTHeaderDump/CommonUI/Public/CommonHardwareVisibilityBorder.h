#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "CommonBorder.h"
#include "CommonHardwareVisibilityBorder.generated.h"

UCLASS()
class COMMONUI_API UCommonHardwareVisibilityBorder : public UCommonBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery VisibilityQuery;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility VisibleType;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility HiddenType;
    
public:
    UCommonHardwareVisibilityBorder();

};

