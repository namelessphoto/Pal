#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalChatMessage.h"
#include "PalChatFilteringWaiter.generated.h"

class UPalChatFilteringWaiter;

UCLASS()
class PAL_API UPalChatFilteringWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilteredChatMessageDelegate, UPalChatFilteringWaiter*, Waiter, const FPalChatMessage&, Message);
    
    UPROPERTY()
    FOnFilteredChatMessageDelegate OnFilteredChatMessageDelegate;
    
private:
    UPROPERTY()
    FPalChatMessage ChatData;
    
public:
    UPalChatFilteringWaiter();

    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

