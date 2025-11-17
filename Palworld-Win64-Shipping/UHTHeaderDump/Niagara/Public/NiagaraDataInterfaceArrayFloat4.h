#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayFloat4.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector4f> InternalFloatData;
    
    UNiagaraDataInterfaceArrayFloat4();

};

