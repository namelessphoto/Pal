#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleEnergy.generated.h"

class UPalBaseCampModuleEnergy_FunctionBase;

UCLASS()
class UPalBaseCampModuleEnergy : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<UPalBaseCampModuleEnergy_FunctionBase*> FunctionArray;
    
public:
    UPalBaseCampModuleEnergy();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

