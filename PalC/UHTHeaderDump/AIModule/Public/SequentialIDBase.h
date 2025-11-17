#pragma once
#include "CoreMinimal.h"
#include "SequentialIDBase.generated.h"

USTRUCT()
struct AIMODULE_API FSequentialIDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint32 Value;
    
public:
    FSequentialIDBase();
};

