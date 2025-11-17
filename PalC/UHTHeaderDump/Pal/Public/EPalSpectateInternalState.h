#pragma once
#include "CoreMinimal.h"
#include "EPalSpectateInternalState.generated.h"

UENUM()
    STATE_None,
    STATE_ClientWaitServerBegin,
    STATE_Spectating,
    STATE_ClientWaitServerVerifyNextPlayer,
    STATE_ClientUpdateSpectateNextPlayer,
    STATE_ClientWaitServerEnd,
};

