#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "InteractiveToolCameraFocusAPI.h"
#include "SingleSelectionTool.generated.h"

class UToolTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleSelectionTool : public UInteractiveTool, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UToolTarget* Target;
    
public:
    USingleSelectionTool();


    // Fix for true pure virtual functions not being implemented
};

