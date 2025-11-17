#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraRendererMaterialVectorParameter.generated.h"

USTRUCT()
struct FNiagaraRendererMaterialVectorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MaterialParameterName;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Value;
    
    NIAGARA_API FNiagaraRendererMaterialVectorParameter();
};

