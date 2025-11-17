#pragma once
#include "CoreMinimal.h"
#include "EPalFishingRodState.generated.h"

UENUM()
    None,
    Idle,
    WaitThrowing,
    Throwing,
    WaitPick,
    Pick,
    WaitHit,
    CatchBattle,
    Return,
};

