#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceSimCacheReader.generated.h"

class UNiagaraSimCache;

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding SimCacheBinding;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSimCache* SimCache;
    
    UPROPERTY(EditAnywhere)
    FName EmitterBinding;
    
    UNiagaraDataInterfaceSimCacheReader();

};

