#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterface2DArrayTexture.generated.h"

class UTexture;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding TextureUserParameter;
    
    UNiagaraDataInterface2DArrayTexture();

};

