#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerPlatform.h"
#include "PlayerListItem.generated.h"

USTRUCT(BlueprintType)
struct FPlayerListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString PlayerName;
    
    UPROPERTY(BlueprintReadOnly)
    FString PlayerUId;
    
    UPROPERTY(BlueprintReadOnly)
    FString UserId;
    
    UPROPERTY(BlueprintReadOnly)
    FString NickName;
    
    UPROPERTY(BlueprintReadOnly)
    EPalPlayerPlatform PlayerPlatform;
    
    PAL_API FPlayerListItem();
};

