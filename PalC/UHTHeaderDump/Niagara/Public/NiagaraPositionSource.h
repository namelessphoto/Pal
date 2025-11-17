#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraPositionSource.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPositionSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FVector Value;
    
    NIAGARA_API FNiagaraPositionSource();
};

