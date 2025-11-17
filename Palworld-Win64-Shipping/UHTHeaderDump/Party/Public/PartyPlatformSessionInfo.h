#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PartyPlatformSessionInfo.generated.h"

USTRUCT()
struct FPartyPlatformSessionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SessionType;
    
    UPROPERTY()
    FString SessionId;
    
    UPROPERTY()
    FUniqueNetIdRepl OwnerPrimaryId;
    
    PARTY_API FPartyPlatformSessionInfo();
};

