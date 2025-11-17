#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayFloat3.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector3f> InternalFloatData;
    
    UNiagaraDataInterfaceArrayFloat3();

};

