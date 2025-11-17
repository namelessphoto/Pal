#pragma once
#include "CoreMinimal.h"
#include "ERejoinStatus.generated.h"

UENUM()
    NoMatchToRejoin,
    RejoinAvailable,
    UpdatingStatus,
    NeedsRecheck,
    NoMatchToRejoin_MatchEnded,
};

