#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PartyMemberJoinInProgressRequest.generated.h"

USTRUCT()
struct FPartyMemberJoinInProgressRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    FUniqueNetIdRepl Target;
    
    UPROPERTY()
    int64 Time;
    
    PARTY_API FPartyMemberJoinInProgressRequest();
};

