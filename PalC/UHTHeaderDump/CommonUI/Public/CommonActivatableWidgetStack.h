#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidgetContainerBase.h"
#include "Templates/SubclassOf.h"
#include "CommonActivatableWidgetStack.generated.h"

class UCommonActivatableWidget;

UCLASS()
class COMMONUI_API UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCommonActivatableWidget> RootContentWidgetClass;
    
    UPROPERTY(Instanced, Transient)
    UCommonActivatableWidget* RootContentWidget;
    
public:
    UCommonActivatableWidgetStack();

};

