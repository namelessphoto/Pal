#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererMaterialTextureParameter.generated.h"

class UTexture;

USTRUCT()
struct FNiagaraRendererMaterialTextureParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaterialParameterName;
    
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
    NIAGARA_API FNiagaraRendererMaterialTextureParameter();
};

