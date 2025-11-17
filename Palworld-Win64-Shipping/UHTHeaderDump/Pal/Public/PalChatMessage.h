#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalChatCategory.h"
#include "PalChatMessage.generated.h"

USTRUCT(BlueprintType)
struct FPalChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    EPalChatCategory Category;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Sender;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGuid SenderPlayerUId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FString Message;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FGuid> ReceiverPlayerUIds;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName MessageId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FString> MessageArgKeys;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FString> MessageArgValues;
    
    PAL_API FPalChatMessage();
};

