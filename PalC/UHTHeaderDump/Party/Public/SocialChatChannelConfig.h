#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannelConfig.generated.h"

class USocialChatChannel;
class USocialUser;

USTRUCT()
struct FSocialChatChannelConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    USocialUser* SocialUser;
    
    UPROPERTY()
    TArray<USocialChatChannel*> ListenChannels;
    
    PARTY_API FSocialChatChannelConfig();
};

