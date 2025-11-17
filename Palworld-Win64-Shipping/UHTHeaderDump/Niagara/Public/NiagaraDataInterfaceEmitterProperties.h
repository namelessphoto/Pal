#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceEmitterBinding.h"
#include "NiagaraDataInterfaceEmitterProperties.generated.h"

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;
    
    UNiagaraDataInterfaceEmitterProperties();

};

