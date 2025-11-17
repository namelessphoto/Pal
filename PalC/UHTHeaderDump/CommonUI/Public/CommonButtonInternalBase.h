#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnButtonClickedEvent__DelegateSignature -FallbackName=OnButtonClickedEventDelegate
#include "CommonButtonInternalBase.generated.h"

UCLASS()
class COMMONUI_API UCommonButtonInternalBase : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnButtonClickedEvent OnDoubleClicked;
    
protected:
    UPROPERTY()
    int32 MinWidth;
    
    UPROPERTY()
    int32 minHeight;
    
    UPROPERTY()
    bool bButtonEnabled;
    
    UPROPERTY()
    bool bInteractionEnabled;
    
public:
    UCommonButtonInternalBase();

};

