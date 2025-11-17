#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSimpleCounter.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UPROPERTY(EditAnywhere)
    int32 InitialValue;
    
    UNiagaraDataInterfaceSimpleCounter();

};

