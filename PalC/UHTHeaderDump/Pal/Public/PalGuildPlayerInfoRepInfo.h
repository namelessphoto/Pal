#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalGuildPlayerInfo.h"
#include "PalGuildPlayerInfoRepInfo.generated.h"

USTRUCT()
struct FPalGuildPlayerInfoRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid PlayerUId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalGuildPlayerInfo PlayerInfo;
    
    PAL_API FPalGuildPlayerInfoRepInfo();
};

