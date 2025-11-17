#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetStackableUI.h"
#include "PalUITitleBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUITitleBase : public UPalUserWidgetStackableUI {
    GENERATED_BODY()
public:
    UPalUITitleBase();

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldShowGlobalPalStorageNewMark() const;
    
};

