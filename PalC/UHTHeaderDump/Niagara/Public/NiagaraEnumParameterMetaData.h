#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "NiagaraEnumParameterMetaData.generated.h"

class UTexture2D;

USTRUCT()
struct NIAGARA_API FNiagaraEnumParameterMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName OverrideName;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* IconOverride;
    
    UPROPERTY(EditAnywhere)
    bool bUseColorOverride;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorOverride;
    
    FNiagaraEnumParameterMetaData();
};

