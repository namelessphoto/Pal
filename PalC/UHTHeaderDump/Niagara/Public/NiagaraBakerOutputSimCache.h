#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerOutput.h"
#include "NiagaraSimCacheCreateParameters.h"
#include "NiagaraBakerOutputSimCache.generated.h"

UCLASS()
class NIAGARA_API UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString SimCacheAssetPathFormat;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSimCacheCreateParameters CreateParameters;
    
    UNiagaraBakerOutputSimCache();

};

