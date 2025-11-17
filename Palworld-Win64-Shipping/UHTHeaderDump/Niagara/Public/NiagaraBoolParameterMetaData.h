#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBoolDisplayMode.h"
#include "NiagaraBoolParameterMetaData.generated.h"

class UTexture2D;

USTRUCT()
struct NIAGARA_API FNiagaraBoolParameterMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraBoolDisplayMode DisplayMode;
    
    UPROPERTY(EditAnywhere)
    FName OverrideNameTrue;
    
    UPROPERTY(EditAnywhere)
    FName OverrideNameFalse;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* IconOverrideTrue;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* IconOverrideFalse;
    
    FNiagaraBoolParameterMetaData();
};

