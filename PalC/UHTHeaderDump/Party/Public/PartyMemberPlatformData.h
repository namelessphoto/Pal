#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "UserPlatform.h"
#include "PartyMemberPlatformData.generated.h"

USTRUCT()
struct FPartyMemberPlatformData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUserPlatform Platform;
    
    UPROPERTY()
    FUniqueNetIdRepl UniqueId;
    
    UPROPERTY()
    FString SessionId;
    
    PARTY_API FPartyMemberPlatformData();
};

