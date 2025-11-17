#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "PalBaseCampWorkerEvent_DodgeWork.h"
#include "PalBaseCampWorkerEvent_DodgeWork_Sleep.generated.h"

UCLASS()
class UPalBaseCampWorkerEvent_DodgeWork_Sleep : public UPalBaseCampWorkerEvent_DodgeWork {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 SleepMinTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SanityValueStillSleeping;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval WalkTime_BeforeSleep;
    
public:
    UPalBaseCampWorkerEvent_DodgeWork_Sleep();

};

