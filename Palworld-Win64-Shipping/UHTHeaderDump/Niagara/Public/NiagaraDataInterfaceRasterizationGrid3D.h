#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid3D.h"
#include "NiagaraDataInterfaceRasterizationGrid3D.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumAttributes;
    
    UPROPERTY(EditAnywhere)
    float Precision;
    
    UPROPERTY(EditAnywhere)
    int32 ResetValue;
    
    UNiagaraDataInterfaceRasterizationGrid3D();

};

