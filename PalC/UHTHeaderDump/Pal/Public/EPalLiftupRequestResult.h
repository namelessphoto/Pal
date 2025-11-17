#pragma once
#include "CoreMinimal.h"
#include "EPalLiftupRequestResult.generated.h"

UENUM()
    Success,
    FailedNotExistsTargetCharacter,
    FailedNotExistsLiftupComponent,
    FailedInvalidPlayerIdInController,
    FailedInvalidDefaultCharacterInController,
    FailedDisabledLiftup,
    FailedInvalidRequestPlayerId,
    FailedAlreadyLiftingActor,
    FailedCharacterParameter,
    FailedIndividualCharacterParameter,
    FailedAlreadyLocked,
    FailedSleeping,
};

