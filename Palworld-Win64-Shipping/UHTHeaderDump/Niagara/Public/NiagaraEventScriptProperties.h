#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EScriptExecutionMode.h"
#include "NiagaraEmitterScriptProperties.h"
#include "NiagaraEventScriptProperties.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EScriptExecutionMode ExecutionMode;
    
    UPROPERTY(EditAnywhere)
    uint32 SpawnNumber;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxEventsPerFrame;
    
    UPROPERTY(EditAnywhere)
    FGuid SourceEmitterID;
    
    UPROPERTY(EditAnywhere)
    FName SourceEventName;
    
    UPROPERTY(EditAnywhere)
    bool bRandomSpawnNumber;
    
    UPROPERTY(EditAnywhere)
    uint32 MinSpawnNumber;
    
    UPROPERTY(EditAnywhere)
    bool UpdateAttributeInitialValues;
    
    NIAGARA_API FNiagaraEventScriptProperties();
};

