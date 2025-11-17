#pragma once
#include "CoreMinimal.h"
#include "NCPoolElement.generated.h"

class UNiagaraComponent;

USTRUCT()
struct FNCPoolElement {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* Component;
    
    NIAGARA_API FNCPoolElement();
};

