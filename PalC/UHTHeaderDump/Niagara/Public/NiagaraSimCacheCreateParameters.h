#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimCacheAttributeCaptureMode.h"
#include "NiagaraSimCacheCreateParameters.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSimCacheCreateParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowRebasing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowDataInterfaceCaching: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> RebaseIncludeAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> RebaseExcludeAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ExplicitCaptureAttributes;
    
    NIAGARA_API FNiagaraSimCacheCreateParameters();
};

