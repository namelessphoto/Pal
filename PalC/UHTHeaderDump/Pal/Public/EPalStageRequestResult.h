#pragma once
#include "CoreMinimal.h"
#include "EPalStageRequestResult.generated.h"

UENUM()
    FailedNotValidStage,
    FailedNotValidPlayerUId,
    FailedNotValidPlayerState,
    FailedNotValidPlayerController,
    FailedNotValidPlayerCharacter,
    FailedNotValidLoginPlayer,
    FailedNotValidNetworkPlayerComponent,
    FailedPlayerIsDead,
    FailedNotValidStageWorldSubsystem,
    FailedGetStartPointTransform,
    FailedGetReturnToFieldPointTransform,
    FailedNotValidExitParameter,
    Success,
};

