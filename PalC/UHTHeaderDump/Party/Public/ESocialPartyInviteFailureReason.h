#pragma once
#include "CoreMinimal.h"
#include "ESocialPartyInviteFailureReason.generated.h"

UENUM()
    Success,
    NotOnline,
    NotAcceptingMembers,
    NotFriends,
    AlreadyInParty,
    OssValidationFailed,
    PlatformInviteFailed,
    PartyInviteFailed,
    InviteRateLimitExceeded,
};

