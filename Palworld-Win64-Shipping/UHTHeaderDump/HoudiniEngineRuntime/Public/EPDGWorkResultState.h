#pragma once
#include "CoreMinimal.h"
#include "EPDGWorkResultState.generated.h"

UENUM()
    None,
    ToLoad,
    Loading,
    Loaded,
    ToDelete,
    Deleting,
    Deleted,
    NotLoaded,
};

