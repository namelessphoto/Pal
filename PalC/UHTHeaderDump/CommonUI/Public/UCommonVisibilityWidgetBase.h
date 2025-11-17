#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "CommonBorder.h"
#include "UCommonVisibilityWidgetBase.generated.h"

UCLASS(Deprecated, NotPlaceable)
class COMMONUI_API UDEPRECATED_UCommonVisibilityWidgetBase : public UCommonBorder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TMap<FName, bool> VisibilityControls;
    
    UPROPERTY(EditAnywhere)
    bool bShowForGamepad;
    
    UPROPERTY(EditAnywhere)
    bool bShowForMouseAndKeyboard;
    
    UPROPERTY(EditAnywhere)
    bool bShowForTouch;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility VisibleType;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility HiddenType;
    
    UDEPRECATED_UCommonVisibilityWidgetBase();

protected:
    UFUNCTION()
    static TArray<FName> GetRegisteredPlatforms();
    
};

