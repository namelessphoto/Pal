#pragma once
#include "CoreMinimal.h"
#include "EPalLabResearchOperationResult.generated.h"

UENUM()
    FailedNotValidResearchId,
    FailedAlreadyResearching,
    FailedCannotConsumeMaterials,
    FailedNotCompletedRequiredResearch,
    FailedNotSameCancelResearchId,
    FailedNotValidRequestPlayerState,
    FailedNotSameGuildRequestPlayer,
    Success,
};

