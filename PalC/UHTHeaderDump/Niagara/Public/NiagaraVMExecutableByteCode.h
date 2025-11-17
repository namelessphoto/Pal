#pragma once
#include "CoreMinimal.h"
#include "NiagaraVMExecutableByteCode.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraVMExecutableByteCode {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> Data;
    
    UPROPERTY()
    int32 UncompressedSize;
    
public:
    FNiagaraVMExecutableByteCode();
};

