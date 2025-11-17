#pragma once
#include "CoreMinimal.h"
#include "PBIKDebug.generated.h"

USTRUCT()
struct FPBIKDebug {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DrawScale;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebug;
    
    PBIK_API FPBIKDebug();
};

