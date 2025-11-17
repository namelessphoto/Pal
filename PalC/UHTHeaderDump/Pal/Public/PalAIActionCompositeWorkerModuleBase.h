#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAIActionCompositeWorkerModuleBase.generated.h"

class UPalAIActionCompositeWorker;

UCLASS(Abstract)
class UPalAIActionCompositeWorkerModuleBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPalAIActionCompositeWorker* Owner;
    
    UPalAIActionCompositeWorkerModuleBase();

};

