#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "EPalDialogType.h"
#include "PalDialogBoolCallbackDelegate.h"
#include "PalDialogCallbackDelegate.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalDialogParameterBase.generated.h"

UCLASS(BlueprintType)
class UPalDialogParameterBase : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    EPalDialogType DialogType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TEnumAsByte<ETextJustify> TextJustify;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalDialogBoolCallback Callback;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalDialogCallback CallbackWithParameter;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsCloseWhenDamaged;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsEnableShortcutConfirmInput;
    
    UPalDialogParameterBase();

    UFUNCTION(BlueprintCallable)
    void InvokeCallback(const bool bResult);
    
};

