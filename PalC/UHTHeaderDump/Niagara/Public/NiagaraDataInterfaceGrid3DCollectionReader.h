#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid3DCollection.h"
#include "NiagaraDataInterfaceGrid3DCollectionReader.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EmitterName;
    
    UPROPERTY(EditAnywhere)
    FString DIName;
    
    UNiagaraDataInterfaceGrid3DCollectionReader();

};

