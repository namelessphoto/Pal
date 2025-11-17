#pragma once
#include "CoreMinimal.h"
#include "AnyButtonInputBehavior.h"
#include "SingleClickOrDragInputBehavior.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bBeginDragIfClickTargetNotHit;
    
    UPROPERTY()
    float ClickDistanceThreshold;
    
    USingleClickOrDragInputBehavior();

};

