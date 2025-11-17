#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FNiagaraCompileEventSeverity.h"
#include "FNiagaraCompileEventSource.h"
#include "NiagaraCompileEvent.generated.h"

USTRUCT()
struct FNiagaraCompileEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraCompileEventSeverity Severity;
    
    UPROPERTY()
    FString Message;
    
    UPROPERTY()
    FString ShortDescription;
    
    UPROPERTY()
    bool bDismissable;
    
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY()
    FGuid PinGuid;
    
    UPROPERTY()
    TArray<FGuid> StackGuids;
    
    UPROPERTY()
    FNiagaraCompileEventSource Source;
    
    NIAGARASHADER_API FNiagaraCompileEvent();
};

