#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceCubeTexture.generated.h"

class UTexture;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding TextureUserParameter;
    
    UNiagaraDataInterfaceCubeTexture();

};

