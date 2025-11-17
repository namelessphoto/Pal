#pragma once
#include "CoreMinimal.h"
#include "OnlinePartyRepDataBase.h"
#include "PartyPlatformSessionInfo.h"
#include "PartyPrivacySettings.h"
#include "PartyRepData.generated.h"

USTRUCT()
struct PARTY_API FPartyRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FPartyPrivacySettings PrivacySettings;
    
    UPROPERTY()
    TArray<FPartyPlatformSessionInfo> PlatformSessions;
    
public:
    FPartyRepData();
};

