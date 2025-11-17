#pragma once
#include "CoreMinimal.h"
#include "GizmoElementLineBase.h"
#include "GizmoElementGroup.generated.h"

class UGizmoElementBase;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementGroup : public UGizmoElementLineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bConstantScale;
    
    UPROPERTY()
    bool bHitOwner;
    
    UPROPERTY()
    TArray<UGizmoElementBase*> Elements;
    
public:
    UGizmoElementGroup();

};

