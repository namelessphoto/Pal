#pragma once
#include "CoreMinimal.h"
#include "CommonBoundActionButtonInterface.h"
#include "CommonButtonBase.h"
#include "CommonBoundActionButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, EditInlineNew)
class COMMONUI_API UCommonBoundActionButton : public UCommonButtonBase, public ICommonBoundActionButtonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCommonTextBlock* Text_ActionName;
    
public:
    UCommonBoundActionButton();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateInputAction();
    

    // Fix for true pure virtual functions not being implemented
};

