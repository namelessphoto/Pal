#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerJoinResult.generated.h"

UENUM()
    Success,
    FailedInvalidLoginPlayerId,
    FailedInvalidLoginPlayerCharacterHandle,
    FailedDuplicateAccountCreation,
};

