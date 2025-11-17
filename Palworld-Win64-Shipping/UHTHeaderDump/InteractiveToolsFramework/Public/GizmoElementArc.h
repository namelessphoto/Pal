#pragma once
#include "CoreMinimal.h"
#include "GizmoElementCircleBase.h"
#include "GizmoElementArc.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementArc : public UGizmoElementCircleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    double InnerRadius;
    
public:
    UGizmoElementArc();

};

