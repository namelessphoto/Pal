#pragma once
#include "CoreMinimal.h"
#include "ECommonUserPrivilege.generated.h"

UENUM()
    CanPlay,
    CanPlayOnline,
    CanCommunicateViaTextOnline,
    CanCommunicateViaVoiceOnline,
    CanUseUserGeneratedContent,
    CanUseCrossPlay,
    Invalid_Count,
};

