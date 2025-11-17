#pragma once
#include "CoreMinimal.h"
#include "NiagaraUObjectPropertyReaderRemap.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraUObjectPropertyReaderRemap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GraphName;
    
    UPROPERTY(EditAnywhere)
    FName RemapName;
    
    NIAGARA_API FNiagaraUObjectPropertyReaderRemap();
};

