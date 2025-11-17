#pragma once
#include "CoreMinimal.h"
#include "EClientRequestType.generated.h"

UENUM()
    NonePending,
    ExistingSessionReservation,
    ReservationUpdate,
    EmptyServerReservation,
    Reconnect,
    Abandon,
    ReservationRemoveMembers,
    AddOrUpdateReservation,
};

