#pragma once
#include "CoreMinimal.h"
#include "EOodleNetResult.generated.h"

UENUM()
    Unknown,
    Success,
    OodleDecodeFailed,
    OodleSerializePayloadFail,
    OodleBadDecompressedLength,
    OodleNoDictionary,
};

