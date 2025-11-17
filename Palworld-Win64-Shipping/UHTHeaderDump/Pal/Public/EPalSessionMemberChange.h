#pragma once
#include "CoreMinimal.h"
#include "EPalSessionMemberChange.generated.h"

UENUM()
    None,
    Join,
    Leave,
    Mute,
    UnMute,
    Block,
    UnBlock,
    ChangedPlayerUId,
};

