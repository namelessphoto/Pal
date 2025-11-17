#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialPlatformDescription.h"
#include "SocialSettings.generated.h"

UCLASS(Config=Game)
class PARTY_API USocialSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    TArray<FName> OssNamesWithEnvironmentIdPrefix;
    
    UPROPERTY(Config)
    int32 DefaultMaxPartySize;
    
    UPROPERTY(Config)
    bool bPreferPlatformInvites;
    
    UPROPERTY(Config)
    bool bMustSendPrimaryInvites;
    
    UPROPERTY(Config)
    bool bLeavePartyOnDisconnect;
    
    UPROPERTY(Config)
    bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
    
    UPROPERTY(Config)
    float UserListAutoUpdateRate;
    
    UPROPERTY(Config)
    int32 MinNicknameLength;
    
    UPROPERTY(Config)
    int32 MaxNicknameLength;
    
    UPROPERTY(Config)
    TArray<FSocialPlatformDescription> SocialPlatformDescriptions;
    
public:
    USocialSettings();

};

