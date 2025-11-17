#pragma once
#include "CoreMinimal.h"
#include "NiagaraPositionSource.h"
#include "NiagaraVariableWithOffset.h"
#include "NiagaraParameterStore.generated.h"

class UNiagaraDataInterface;
class UObject;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraParameterStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> Owner;
    
    UPROPERTY()
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;
    
    UPROPERTY()
    TArray<uint8> ParameterData;
    
    UPROPERTY()
    TArray<UNiagaraDataInterface*> DataInterfaces;
    
    UPROPERTY()
    TArray<UObject*> UObjects;
    
    UPROPERTY()
    TArray<FNiagaraPositionSource> OriginalPositionData;
    
public:
    FNiagaraParameterStore();
};

