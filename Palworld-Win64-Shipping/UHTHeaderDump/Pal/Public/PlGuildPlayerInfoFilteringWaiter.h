#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalGuildPlayerInfo.h"
#include "PlGuildPlayerInfoFilteringWaiter.generated.h"

class UPlGuildPlayerInfoFilteringWaiter;

UCLASS()
class PAL_API UPlGuildPlayerInfoFilteringWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilteredGuildPlayerInfoDelegate, UPlGuildPlayerInfoFilteringWaiter*, Waiter, const FPalGuildPlayerInfo&, FilteredInfo);
    
    UPROPERTY()
    FOnFilteredGuildPlayerInfoDelegate OnFilteredGuildPlayerInfoDelegate;
    
private:
    UPROPERTY()
    FPalGuildPlayerInfo PlayerInfo;
    
    UPROPERTY()
    FGuid PlayerUId;
    
public:
    UPlGuildPlayerInfoFilteringWaiter();

    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

