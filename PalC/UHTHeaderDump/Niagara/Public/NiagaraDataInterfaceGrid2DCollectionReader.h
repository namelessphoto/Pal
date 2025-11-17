#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid2DCollection.h"
#include "NiagaraDataInterfaceGrid2DCollectionReader.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EmitterName;
    
    UPROPERTY(EditAnywhere)
    FString DIName;
    
    UNiagaraDataInterfaceGrid2DCollectionReader();

};

