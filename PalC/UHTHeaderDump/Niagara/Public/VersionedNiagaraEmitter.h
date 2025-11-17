#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "VersionedNiagaraEmitter.generated.h"

class UNiagaraEmitter;

USTRUCT(BlueprintType)
struct NIAGARA_API FVersionedNiagaraEmitter {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraEmitter* Emitter;
    
    UPROPERTY()
    FGuid Version;
    
    FVersionedNiagaraEmitter();
};

