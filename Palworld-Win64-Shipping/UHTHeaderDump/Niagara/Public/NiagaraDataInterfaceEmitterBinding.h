#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataInterfaceEmitterBindingMode.h"
#include "NiagaraDataInterfaceEmitterBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataInterfaceEmitterBinding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraDataInterfaceEmitterBindingMode BindingMode;
    
    UPROPERTY(EditAnywhere)
    FName EmitterName;
    
    NIAGARA_API FNiagaraDataInterfaceEmitterBinding();
};

