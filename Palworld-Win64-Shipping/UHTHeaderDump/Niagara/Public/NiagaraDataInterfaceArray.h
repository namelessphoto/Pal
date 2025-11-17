#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceArray.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ENiagaraGpuSyncMode GpuSyncMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 MaxElements;
    
    UNiagaraDataInterfaceArray();

};

