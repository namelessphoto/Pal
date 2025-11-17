#pragma once
#include "CoreMinimal.h"
#include "JoinSessionResultType.generated.h"

UENUM()
    Success,
    SessionIsFull,
    SessionDoesNotExist,
    CouldNotRetrieveAddress,
    AlreadyInSession,
    UnknownError,
};

