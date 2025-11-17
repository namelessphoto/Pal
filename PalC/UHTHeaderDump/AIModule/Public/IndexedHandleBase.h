#pragma once
#include "CoreMinimal.h"
#include "SimpleIndexedHandleBase.h"
#include "IndexedHandleBase.generated.h"

USTRUCT()
struct AIMODULE_API FIndexedHandleBase : public FSimpleIndexedHandleBase {
    GENERATED_BODY()
public:
    FIndexedHandleBase();
};

