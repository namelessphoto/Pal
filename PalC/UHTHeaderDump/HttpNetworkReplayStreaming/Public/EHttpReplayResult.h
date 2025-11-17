#pragma once
#include "CoreMinimal.h"
#include "EHttpReplayResult.generated.h"

UENUM()
    Success,
    FailedJsonParse,
    DataUnavailable,
    InvalidHttpResponse,
    CompressionFailed,
    DecompressionFailed,
    InvalidPayload,
    Unknown,
};

