#pragma once
#include "CoreMinimal.h"
#include "EMeshSelectionToolActions.generated.h"

UENUM()
    NoAction,
    SelectAll,
    ClearSelection,
    InvertSelection,
    GrowSelection,
    ShrinkSelection,
    ExpandToConnected,
    SelectLargestComponentByTriCount,
    SelectLargestComponentByArea,
    OptimizeSelection,
    DeleteSelected,
    DisconnectSelected,
    SeparateSelected,
    DuplicateSelected,
    FlipSelected,
    CreateGroup,
    SmoothBoundary,
    CycleSelectionMode,
    CycleViewMode,
};

