#pragma once
#include "CoreMinimal.h"
#include "ELocalFileReplayResult.generated.h"

UENUM()
    Success,
    InvalidReplayInfo,
    StreamChunkIndexMismatch,
    DecompressBuffer,
    CompressionNotSupported,
    DecryptBuffer,
    EncryptionNotSupported,
    Unknown,
};

