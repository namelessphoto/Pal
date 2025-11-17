#pragma once
#include "CoreMinimal.h"
#include "ENDICollisionQuery_AsyncGpuTraceProvider.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceAsyncGpuTrace.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxTracesPerParticle;
    
    UPROPERTY(EditAnywhere)
    int32 MaxRetraces;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider;
    
    UNiagaraDataInterfaceAsyncGpuTrace();

};

