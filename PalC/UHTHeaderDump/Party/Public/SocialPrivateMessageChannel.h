#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannel.h"
#include "SocialPrivateMessageChannel.generated.h"

class USocialUser;

UCLASS()
class PARTY_API USocialPrivateMessageChannel : public USocialChatChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USocialUser* TargetUser;
    
public:
    USocialPrivateMessageChannel();

};

