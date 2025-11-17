#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalDimensionLockerTimeoutTimer.generated.h"

class UPalDimensionLockerControl;

UCLASS()
class PAL_API UPalDimensionLockerTimeoutTimer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTimerHandle TimerHandle;
    
    UPROPERTY()
    TWeakObjectPtr<UPalDimensionLockerControl> WeakLockerControl;
    
public:
    UPalDimensionLockerTimeoutTimer();

private:
    UFUNCTION()
    void OnTimeout();
    
};

