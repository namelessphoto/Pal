#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfaceGeometryCollection.generated.h"

class AGeometryCollectionActor;

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AGeometryCollectionActor* GeometryCollectionActor;
    
    UNiagaraDataInterfaceGeometryCollection();

};

