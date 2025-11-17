#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerAccountState.generated.h"

UENUM()
    Uninitialized,
    Initialized,
    InNewCreation,
    Login,
    Logout,
};

