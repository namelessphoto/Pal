#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "BlueprintInputDebugKeyDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct ENHANCEDINPUT_API FBlueprintInputDebugKeyDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FInputChord InputChord;
    
    UPROPERTY()
    TEnumAsByte<EInputEvent> InputKeyEvent;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    UPROPERTY()
    bool bExecuteWhenPaused;
    
    FBlueprintInputDebugKeyDelegateBinding();
};

