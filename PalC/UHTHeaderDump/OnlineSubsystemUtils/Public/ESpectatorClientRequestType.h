#pragma once
#include "CoreMinimal.h"
#include "ESpectatorClientRequestType.generated.h"

UENUM()
    NonePending,
    ExistingSessionReservation,
    ReservationUpdate,
    EmptyServerReservation,
    Reconnect,
    Abandon,
};

