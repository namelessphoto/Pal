#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetStackableUI.h"
#include "PalUIDismantling.generated.h"

UCLASS(EditInlineNew)
class UPalUIDismantling : public UPalUserWidgetStackableUI {
    GENERATED_BODY()
public:
    UPalUIDismantling();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DismantleObjectSuccessed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DismantleObjectFailed();
    
};

