#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Chatroom.generated.h"

UCLASS(Config=Game)
class PARTY_API UChatroom : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString CurrentChatRoomId;
    
    UPROPERTY()
    int32 MaxChatRoomRetries;
    
    UPROPERTY()
    int32 NumChatRoomRetries;
    
public:
    UChatroom();

};

