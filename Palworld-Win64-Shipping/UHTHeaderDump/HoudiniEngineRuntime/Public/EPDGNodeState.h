#pragma once
#include "CoreMinimal.h"
#include "EPDGNodeState.generated.h"

UENUM()
    None,
    Dirtied,
    Dirtying,
    Cooking,
    Cook_Complete,
    Cook_Failed,
};

