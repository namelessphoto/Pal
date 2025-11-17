#pragma once
#include "CoreMinimal.h"
#include "EUpdateCompletionStatus.generated.h"

UENUM()
    UpdateUnknown,
    UpdateSuccess,
    UpdateSuccess_NoChange,
    UpdateSuccess_NeedsReload,
    UpdateSuccess_NeedsRelaunch,
    UpdateSuccess_NeedsPatch,
    UpdateFailure_PatchCheck,
    UpdateFailure_HotfixCheck,
    UpdateFailure_NotLoggedIn,
};

