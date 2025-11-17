#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "NiagaraMatrix.generated.h"

USTRUCT()
struct FNiagaraMatrix {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4f Row0;
    
    UPROPERTY(EditAnywhere)
    FVector4f Row1;
    
    UPROPERTY(EditAnywhere)
    FVector4f Row2;
    
    UPROPERTY(EditAnywhere)
    FVector4f Row3;
    
    NIAGARA_API FNiagaraMatrix();
};

