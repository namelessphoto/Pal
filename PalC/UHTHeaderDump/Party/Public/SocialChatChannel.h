#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialChatChannel.generated.h"

UCLASS(Abstract, Within=SocialChatManager)
class PARTY_API USocialChatChannel : public UObject {
    GENERATED_BODY()
public:
    USocialChatChannel();

};

