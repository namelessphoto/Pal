#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "LobbyPlayerStateActorInfo.generated.h"

class ALobbyBeaconPlayerState;

USTRUCT()
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    ALobbyBeaconPlayerState* LobbyPlayerState;
    
    LOBBY_API FLobbyPlayerStateActorInfo();
};

