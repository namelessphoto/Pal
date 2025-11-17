#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampWorkerEventBase.h"
#include "Templates/SubclassOf.h"
#include "PalBaseCampWorkerEvent_DodgeWork.generated.h"

class UPalAIActionBase;

UCLASS()
class UPalBaseCampWorkerEvent_DodgeWork : public UPalBaseCampWorkerEventBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBase> actionClass;
    
    UPROPERTY(EditDefaultsOnly)
    float AIActionDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float TerminateSanityValueOver;
    
public:
    UPalBaseCampWorkerEvent_DodgeWork();

};

