#pragma once
#include "CoreMinimal.h"
#include "PalUIPaldex_DisplayInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPaldex.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIPaldex : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, FPalUIPaldex_DisplayInfo> DisplayInfoMap;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FPalUIPaldex_DisplayInfo> displayInfoArray;
    
public:
    UPalUIPaldex();

protected:
    UFUNCTION(BlueprintCallable)
    void CreateDisplayInfo();
    
};

