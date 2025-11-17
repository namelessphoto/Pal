#pragma once
#include "CoreMinimal.h"
#include "PrimitiveComponentBackedTarget.h"
#include "ToolTarget.h"
#include "PrimitiveComponentToolTarget.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UPrimitiveComponentToolTarget : public UToolTarget, public IPrimitiveComponentBackedTarget {
    GENERATED_BODY()
public:
    UPrimitiveComponentToolTarget();


    // Fix for true pure virtual functions not being implemented
};

