#pragma once
#include "CoreMinimal.h"
#include "ENetworkFailure.generated.h"

UENUM()
    NetDriverAlreadyExists,
    NetDriverCreateFailure,
    NetDriverListenFailure,
    ConnectionLost,
    ConnectionTimeout,
    FailureReceived,
    OutdatedClient,
    OutdatedServer,
    PendingConnectionFailure,
    NetGuidMismatch,
    NetChecksumMismatch,
};

