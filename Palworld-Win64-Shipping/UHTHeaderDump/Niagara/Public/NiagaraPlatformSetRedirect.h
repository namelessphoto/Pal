#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDeviceProfileRedirectMode.h"
#include "NiagaraPlatformSetCVarCondition.h"
#include "NiagaraPlatformSetRedirect.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPlatformSetRedirect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> ProfileNames;
    
    UPROPERTY(EditAnywhere)
    ENiagaraDeviceProfileRedirectMode Mode;
    
    UPROPERTY(EditAnywhere)
    FName RedirectProfileName;
    
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSetCVarCondition CVarConditionEnabled;
    
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSetCVarCondition CVarConditionDisabled;
    
    NIAGARA_API FNiagaraPlatformSetRedirect();
};

