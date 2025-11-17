#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceVolumeCache.generated.h"

class UVolumeCache;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVolumeCache* VolumeCache;
    
    UNiagaraDataInterfaceVolumeCache();

};

