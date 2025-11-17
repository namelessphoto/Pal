#include "RejoinCheck.h"

URejoinCheck::URejoinCheck() {
    this->LastKnownStatus = ERejoinStatus::NeedsRecheck;
    this->bRejoinAfterCheck = false;
    this->bAttemptingRejoin = false;
}


