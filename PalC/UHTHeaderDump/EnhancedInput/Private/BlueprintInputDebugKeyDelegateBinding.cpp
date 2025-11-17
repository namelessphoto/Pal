#include "BlueprintInputDebugKeyDelegateBinding.h"

FBlueprintInputDebugKeyDelegateBinding::FBlueprintInputDebugKeyDelegateBinding() {
    this->InputKeyEvent = EInputEvent::IE_Pressed;
    this->bExecuteWhenPaused = false;
}

