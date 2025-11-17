#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=DynamicEntryBoxBase -FallbackName=DynamicEntryBoxBase
#include "Templates/SubclassOf.h"
#include "CommonBoundActionBar.generated.h"

class UCommonButtonBase;

UCLASS()
class COMMONUI_API UCommonBoundActionBar : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCommonButtonBase> ActionButtonClass;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayOwningPlayerActionsOnly;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIgnoreDuplicateActions;
    
public:
    UCommonBoundActionBar();

    UFUNCTION(BlueprintCallable)
    void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
    
};

