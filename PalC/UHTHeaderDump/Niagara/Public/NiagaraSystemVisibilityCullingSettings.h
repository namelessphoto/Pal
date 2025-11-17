#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemVisibilityCullingSettings.generated.h"

USTRUCT()
struct FNiagaraSystemVisibilityCullingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bCullWhenNotRendered: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByViewFrustum: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowPreCullingByViewFrustum: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeOutsideViewFrustum;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeWithoutRender;
    
    NIAGARA_API FNiagaraSystemVisibilityCullingSettings();
};

