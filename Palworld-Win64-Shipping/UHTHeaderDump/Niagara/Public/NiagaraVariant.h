#pragma once
#include "CoreMinimal.h"
#include "ENiagaraVariantMode.h"
#include "NiagaraVariant.generated.h"

class UNiagaraDataInterface;
class UObject;

USTRUCT()
struct NIAGARA_API FNiagaraVariant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UObject* Object;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraDataInterface* DataInterface;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Bytes;
    
    UPROPERTY(EditAnywhere)
    ENiagaraVariantMode CurrentMode;
    
public:
    FNiagaraVariant();
};

