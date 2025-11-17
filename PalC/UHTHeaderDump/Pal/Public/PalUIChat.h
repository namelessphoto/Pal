#pragma once
#include "CoreMinimal.h"
#include "PalChatMessage.h"
#include "PalUserWidget.h"
#include "PalUIChat.generated.h"

class UPalChatFilteringWaiter;

UCLASS(EditInlineNew)
class PAL_API UPalUIChat : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRecievedFilteredMessageDelegate, const FPalChatMessage&, Message);
    
    UPROPERTY(BlueprintAssignable)
    FOnRecievedFilteredMessageDelegate OnRecievedFilteredMessageDelegate;
    
private:
    UPROPERTY()
    TArray<UPalChatFilteringWaiter*> FilteringWaiterArray;
    
public:
    UPalUIChat();

protected:
    UFUNCTION()
    void OnReceivedChat(const FPalChatMessage& Message);
    
    UFUNCTION()
    void OnFilteredChat(UPalChatFilteringWaiter* Waiter, const FPalChatMessage& Message);
    
};

