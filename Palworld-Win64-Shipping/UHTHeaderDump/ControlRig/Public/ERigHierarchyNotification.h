#pragma once
#include "CoreMinimal.h"
#include "ERigHierarchyNotification.generated.h"

UENUM()
    ElementAdded,
    ElementRemoved,
    ElementRenamed,
    ElementSelected,
    ElementDeselected,
    ParentChanged,
    HierarchyReset,
    ControlSettingChanged,
    ControlVisibilityChanged,
    ControlDrivenListChanged,
    ControlShapeTransformChanged,
    ParentWeightsChanged,
    InteractionBracketOpened,
    InteractionBracketClosed,
    Max,
};

