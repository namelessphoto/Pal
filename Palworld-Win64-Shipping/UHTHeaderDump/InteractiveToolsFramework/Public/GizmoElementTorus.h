#pragma once
#include "CoreMinimal.h"
#include "GizmoElementCircleBase.h"
#include "GizmoElementTorus.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementTorus : public UGizmoElementCircleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    double InnerRadius;
    
    UPROPERTY()
    int32 NumInnerSlices;
    
    UPROPERTY()
    bool bEndCaps;
    
public:
    UGizmoElementTorus();

};

