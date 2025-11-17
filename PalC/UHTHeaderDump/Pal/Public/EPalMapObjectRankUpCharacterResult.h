#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectRankUpCharacterResult.generated.h"

UENUM()
    Success,
    FailedNotValidIndividualHandle,
    FailedNotValidIndividualParameter,
    FailedNotValidPlayerState,
    FailedNotValidPlayerPalStorage,
    FailedNotExistsResourceCharacterInPalStorage,
    FailedResourcePalIsFavoritePal,
    FailedResourcePalInExpedition,
    FailedResourcePalIsImportedCharacter,
    FailedNotValidGroupManager,
};

