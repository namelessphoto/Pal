#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalKillLogDisplayData.h"
#include "PalKillLogFilteringWaiter.generated.h"

class UPalKillLogFilteringWaiter;

UCLASS()
class PAL_API UPalKillLogFilteringWaiter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFilteredKillLogDelegate, UPalKillLogFilteringWaiter*, Waiter, const FPalKillLogDisplayData&, Message);
    
    UPROPERTY()
    FOnFilteredKillLogDelegate OnFilteredKillLogDelegate;
    
    UPROPERTY()
    bool IsKillLog;
    
private:
    UPROPERTY()
    FPalKillLogDisplayData LogData;
    
public:
    UPalKillLogFilteringWaiter();

    UFUNCTION()
    void OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

