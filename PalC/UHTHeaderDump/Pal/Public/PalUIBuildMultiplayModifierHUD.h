#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIBuildMultiplayModifierHUD.generated.h"

class UPalMapObjectMultiplayParameter;
class UPalMapObjectSignboardModel;

UCLASS(EditInlineNew)
class UPalUIBuildMultiplayModifierHUD : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString LastModifiedUserName;
    
private:
    UPROPERTY()
    UPalMapObjectSignboardModel* SignboardModel;
    
public:
    UPalUIBuildMultiplayModifierHUD();

    UFUNCTION(BlueprintCallable)
    void UpdateLastModifiedUserName();
    
private:
    UFUNCTION()
    void OnUpdateSignboardText(const FString& Text);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateLastModifiedUserName();
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectMultiplayParameter* GetMultiplayParam();
    
};

