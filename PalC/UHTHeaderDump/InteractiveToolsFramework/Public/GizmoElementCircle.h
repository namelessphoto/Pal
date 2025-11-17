#pragma once
#include "CoreMinimal.h"
#include "GizmoElementCircleBase.h"
#include "GizmoElementCircle.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCircle : public UGizmoElementCircleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bDrawMesh;
    
    UPROPERTY()
    bool bDrawLine;
    
    UPROPERTY()
    bool bHitMesh;
    
    UPROPERTY()
    bool bHitLine;
    
public:
    UGizmoElementCircle();

};

