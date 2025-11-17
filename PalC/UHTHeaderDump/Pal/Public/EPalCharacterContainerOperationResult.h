#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterContainerOperationResult.generated.h"

UENUM()
    Success,
    FailedTerminatedManager,
    FailedIssueContainerId,
    FailedOverflowSlotNum,
    FailedNotFoundContainer,
    FailedNotFoundSlot,
    FailedNotFoundCharacter,
    FailedNotFoundCharacterParameter,
    FailedIsLocalOnlyContainer,
    FailedNoContainerInfoInResponse,
    FailedNotEnoughSlotSpace,
    FailedCannotGetSlotInfo,
    FailedChangedSlotInfoRequestedOne,
    FailedCannotSetTargetHandle,
    FailedAlreadyLocked,
    FailedNotJoinedPlayer,
    FailedTransactionLocked,
    FailedSimple,
    FailedServerCode,
};

