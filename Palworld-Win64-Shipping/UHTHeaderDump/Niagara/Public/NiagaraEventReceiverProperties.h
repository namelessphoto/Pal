#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventReceiverProperties.generated.h"

USTRUCT()
struct FNiagaraEventReceiverProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FName SourceEventGenerator;
    
    UPROPERTY(EditAnywhere)
    FName SourceEmitter;
    
    NIAGARA_API FNiagaraEventReceiverProperties();
};

