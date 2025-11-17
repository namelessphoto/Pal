#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PartyMemberJoinInProgressResponse.generated.h"

USTRUCT()
struct FPartyMemberJoinInProgressResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUniqueNetIdRepl Requester;
    
    UPROPERTY()
    int64 RequestTime;
    
    UPROPERTY()
    int64 ResponseTime;
    
    UPROPERTY()
    uint8 DenialReason;
    
    PARTY_API FPartyMemberJoinInProgressResponse();
};

