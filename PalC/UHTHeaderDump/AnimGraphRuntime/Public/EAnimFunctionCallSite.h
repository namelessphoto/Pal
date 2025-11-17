#pragma once
#include "CoreMinimal.h"
#include "EAnimFunctionCallSite.generated.h"

UENUM()
    OnInitialize,
    OnUpdate,
    OnBecomeRelevant,
    OnEvaluate,
    OnInitializePostRecursion,
    OnUpdatePostRecursion,
    OnBecomeRelevantPostRecursion,
    OnEvaluatePostRecursion,
    OnStartedBlendingOut,
    OnStartedBlendingIn,
    OnFinishedBlendingOut,
    OnFinishedBlendingIn,
};

