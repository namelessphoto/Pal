#pragma once
#include "CoreMinimal.h"
#include "EPalArenaEntryRequestResult.generated.h"

UENUM()
    Failed,
    Failed_AlreadyStarted,
    Failed_FullMember,
    Success_Entered,
    Failed_BattleEnd,
};

