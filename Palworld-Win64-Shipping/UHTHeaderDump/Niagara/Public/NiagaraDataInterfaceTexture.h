#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceTexture.generated.h"

class UTexture;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding TextureUserParameter;
    
    UNiagaraDataInterfaceTexture();

};

