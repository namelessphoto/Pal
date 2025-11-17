#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PalUserWidget.h"
#include "PalUIActionWidgetForPlayerInput.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUIActionWidgetForPlayerInput : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName BindInputActionName;
    
    UPROPERTY(EditAnywhere)
    FName OverrideMouseInputActionName;
    
    UPROPERTY(EditAnywhere)
    FName OverridePadInputActionName;
    
    UPROPERTY(EditAnywhere)
    int32 OverrideInputType;
    
public:
    UPalUIActionWidgetForPlayerInput();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateImage(FSlateBrush newBrush);
    
    UFUNCTION(BlueprintCallable)
    void UnbindInputMethodChangeEvent();
    
protected:
    UFUNCTION()
    void OnKeyConfigChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeOverrideType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOverridePadBindActionName(const FName& NewActionName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOverrideMouseBindActionName(const FName& NewActionName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBindActionName(const FName& NewActionName);
    
    UFUNCTION(BlueprintCallable)
    void BindInputMethodChangeEvent();
    
};

