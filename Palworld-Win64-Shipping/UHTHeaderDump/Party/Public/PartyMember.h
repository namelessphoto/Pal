#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PartyMember.generated.h"

class USocialUser;

UCLASS(Abstract, Transient, Config=Game, Within=SocialParty)
class PARTY_API UPartyMember : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USocialUser* SocialUser;
    
public:
    UPartyMember();

};

