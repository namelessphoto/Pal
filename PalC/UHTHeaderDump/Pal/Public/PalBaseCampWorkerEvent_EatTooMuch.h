#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "PalBaseCampWorkerEvent_EatTooMuch.generated.h"

UCLASS()
class UPalBaseCampWorkerEvent_EatTooMuch : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float RecoverSanityTo;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EatMaxNum;
    
public:
    UPalBaseCampWorkerEvent_EatTooMuch();

};

