#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "InteractiveToolCameraFocusAPI.h"
#include "MultiSelectionTool.generated.h"

class UToolTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMultiSelectionTool : public UInteractiveTool, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UToolTarget*> Targets;
    
public:
    UMultiSelectionTool();


    // Fix for true pure virtual functions not being implemented
};

