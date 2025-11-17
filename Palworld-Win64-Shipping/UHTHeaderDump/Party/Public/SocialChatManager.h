#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "SocialChatManager.generated.h"

class USocialChatRoom;
class USocialGroupChannel;
class USocialPrivateMessageChannel;
class USocialReadOnlyChatChannel;
class USocialUser;

UCLASS(Config=Game, Within=SocialToolkit)
class PARTY_API USocialChatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<TWeakObjectPtr<USocialUser>, USocialPrivateMessageChannel*> DirectChannelsByTargetUser;
    
    UPROPERTY()
    TMap<FString, USocialChatRoom*> ChatRoomsById;
    
    UPROPERTY()
    TMap<FString, USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;
    
    UPROPERTY(Config)
    bool bEnableChatSlashCommands;
    
    UPROPERTY()
    TMap<FUniqueNetIdRepl, USocialGroupChannel*> GroupChannels;
    
public:
    USocialChatManager();

};

