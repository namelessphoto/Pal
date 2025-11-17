#pragma once
#include "CoreMinimal.h"
#include "NiagaraMaterialAttributeBinding.h"
#include "NiagaraRendererMaterialScalarParameter.h"
#include "NiagaraRendererMaterialTextureParameter.h"
#include "NiagaraRendererMaterialVectorParameter.h"
#include "NiagaraRendererMaterialParameters.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRendererMaterialParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraMaterialAttributeBinding> AttributeBindings;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraRendererMaterialScalarParameter> ScalarParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraRendererMaterialVectorParameter> VectorParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraRendererMaterialTextureParameter> TextureParameters;
    
    NIAGARA_API FNiagaraRendererMaterialParameters();
};

