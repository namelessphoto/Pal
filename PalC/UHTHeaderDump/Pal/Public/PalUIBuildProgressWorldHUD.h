#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIBuildProgressWorldHUD.generated.h"

class UPalBuildProcess;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(EditInlineNew)
class PAL_API UPalUIBuildProgressWorldHUD : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalBuildProcess* BuildProcess;
    
public:
    UPalUIBuildProgressWorldHUD();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(UPalWorkProgress* Work);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedAssignCharacter(UPalWorkBase* TargetWork);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRequestClose(UPalBuildProcess* Process);
    
    UFUNCTION(BlueprintCallable)
    void CloseSelf();
    
private:
    UFUNCTION(BlueprintCallable)
    void BindUpdateAssingedCharacterDelegate();
    
};

