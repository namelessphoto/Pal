#pragma once
#include "CoreMinimal.h"
#include "PalOptionWorldSettings.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIWorldSettingBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIWorldSettingBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FPalOptionWorldSettings OriginalSetting;
    
    UPROPERTY()
    FString CachedInputWorldName;
    
public:
    UPalUIWorldSettingBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryRequestWorldNameFilter(const FString& NewWorldName);
    
    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFilteredWorldName(const FString& NewWorldName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCompletedSaveSetting(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool CompleteSetting(const FPalOptionWorldSettings& NewSetting);
    
};

