#include "SocialSettings.h"

USocialSettings::USocialSettings() {
    this->OssNamesWithEnvironmentIdPrefix.AddDefaulted(1);
    this->DefaultMaxPartySize = 4;
    this->bPreferPlatformInvites = true;
    this->bMustSendPrimaryInvites = false;
    this->bLeavePartyOnDisconnect = true;
    this->bSetDesiredPrivacyOnLocalPlayerBecomesLeader = true;
    this->UserListAutoUpdateRate = 0.50f;
    this->MinNicknameLength = 3;
    this->MaxNicknameLength = 16;
    this->SocialPlatformDescriptions.AddDefaulted(8);
}


