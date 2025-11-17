#pragma once
#include "CoreMinimal.h"
#include "EPalUIPalCharacterRankUpRequestResult.generated.h"

UENUM()
    Success,
    FailedNotValidMapObject,
    FailedNotSetTarget,
    FailedCannotRankUp,
    FailedNotEnoughResources,
};

