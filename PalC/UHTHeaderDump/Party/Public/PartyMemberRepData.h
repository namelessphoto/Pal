#pragma once
#include "CoreMinimal.h"
#include "ECrossplayPreference.h"
#include "OnlinePartyRepDataBase.h"
#include "PartyMemberJoinInProgressData.h"
#include "PartyMemberPlatformData.h"
#include "PartyMemberRepData.generated.h"

USTRUCT()
struct PARTY_API FPartyMemberRepData : public FOnlinePartyRepDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPartyMemberPlatformData PlatformData;
    
    UPROPERTY()
    ECrossplayPreference CrossplayPreference;
    
    UPROPERTY()
    FString JoinMethod;
    
    UPROPERTY()
    FPartyMemberJoinInProgressData JoinInProgressData;
    
public:
    FPartyMemberRepData();
};

