#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalAIActionCompositeWorkerModuleBase.h"
#include "PalAIActionCompositeWorkerModuleBaseCamp.generated.h"

class UPalBaseCampModel;

UCLASS(BlueprintType)
class UPalAIActionCompositeWorkerModuleBaseCamp : public UPalAIActionCompositeWorkerModuleBase {
    GENERATED_BODY()
public:
    UPalAIActionCompositeWorkerModuleBaseCamp();

    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampBelongTo() const;
    
};

