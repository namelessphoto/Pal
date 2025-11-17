#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayFloat2.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector2f> InternalFloatData;
    
    UNiagaraDataInterfaceArrayFloat2();

};

