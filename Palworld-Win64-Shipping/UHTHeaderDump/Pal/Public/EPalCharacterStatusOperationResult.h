#pragma once
#include "CoreMinimal.h"
#include "EPalCharacterStatusOperationResult.generated.h"

UENUM()
    Success,
    FailedNotValidIndividualHandle,
    FailedNotValidIndividualParameter,
    FailedNotValidPlayerState,
    FailedNotValidPlayerRecordData,
    FailedNotValidPlayerInventoryData,
    FailedNotValidOtomoHolder,
    FailedGetPlayerRankMasterData,
    FailedGetCharacterUpgradeMasterData,
    FailedNotFoundOtomo,
    FailedAlreadyMaxRank,
    FailedAlreadyResetStatus,
    FailedCalcRequiredRelicNum,
    FailedLackRelicNum,
    FailedCalcRequiredUpgradeItemNum,
    FailedLackUpgradeItemNum,
    FailedLackMoneyNum,
    FailedItemOperation,
    FailedImportedPal,
};

