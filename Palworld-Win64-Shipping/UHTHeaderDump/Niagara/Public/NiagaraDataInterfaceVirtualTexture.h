#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceVirtualTexture.generated.h"

class URuntimeVirtualTexture;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    URuntimeVirtualTexture* Texture;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding TextureUserParameter;
    
    UNiagaraDataInterfaceVirtualTexture();

};

