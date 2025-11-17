#pragma once
#include "CoreMinimal.h"
#include "PartyMemberJoinInProgressRequest.h"
#include "PartyMemberJoinInProgressResponse.h"
#include "PartyMemberJoinInProgressData.generated.h"

USTRUCT()
struct FPartyMemberJoinInProgressData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPartyMemberJoinInProgressRequest Request;
    
    UPROPERTY()
    TArray<FPartyMemberJoinInProgressResponse> Responses;
    
    PARTY_API FPartyMemberJoinInProgressData();
};

