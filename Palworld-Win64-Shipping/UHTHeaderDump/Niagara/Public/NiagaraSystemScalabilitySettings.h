#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCullProxyMode.h"
#include "NiagaraGlobalBudgetScaling.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraSystemVisibilityCullingSettings.h"
#include "NiagaraSystemScalabilitySettings.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullMaxInstanceCount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullPerSystemMaxInstanceCount: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY()
    uint8 bCullByMaxTimeWithoutRender: 1;
    
    UPROPERTY(EditAnywhere)
    int32 MaxInstances;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSystemInstances;
    
    UPROPERTY()
    float MaxTimeWithoutRender;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullProxyMode CullProxyMode;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSystemProxies;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemVisibilityCullingSettings VisibilityCulling;
    
    UPROPERTY(EditAnywhere)
    FNiagaraGlobalBudgetScaling BudgetScaling;
    
    FNiagaraSystemScalabilitySettings();
};

