#pragma once
#include "CoreMinimal.h"
#include "ECommonUserPrivilegeResult.generated.h"

UENUM()
    Unknown,
    Available,
    UserNotLoggedIn,
    LicenseInvalid,
    VersionOutdated,
    NetworkConnectionUnavailable,
    AgeRestricted,
    AccountTypeRestricted,
    AccountUseRestricted,
    PlatformFailure,
};

