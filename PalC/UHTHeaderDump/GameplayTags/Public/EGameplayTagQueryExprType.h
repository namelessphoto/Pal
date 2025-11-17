#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagQueryExprType.generated.h"

UENUM()
    Undefined,
    AnyTagsMatch,
    AllTagsMatch,
    NoTagsMatch,
    AnyExprMatch,
    AllExprMatch,
    NoExprMatch,
};

