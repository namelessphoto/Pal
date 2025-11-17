#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "MouseWheelInputBehavior.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMouseWheelInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UMouseWheelInputBehavior();

};

