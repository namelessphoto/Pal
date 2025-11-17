#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "InstancedPropertyBag.generated.h"

USTRUCT()
struct STRUCTUTILS_API FInstancedPropertyBag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FInstancedStruct Value;
    
public:
    FInstancedPropertyBag();
};

