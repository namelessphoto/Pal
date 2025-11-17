#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoClickTarget.h"
#include "GizmoElementHitTarget.generated.h"

class UGizmoElementBase;
class UGizmoViewContext;
class UTransformProxy;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGizmoElementBase* GizmoElement;
    
    UPROPERTY()
    UGizmoViewContext* GizmoViewContext;
    
    UPROPERTY()
    UTransformProxy* GizmoTransformProxy;
    
    UGizmoElementHitTarget();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void UpdateInteractingState(bool bInteracting) override PURE_VIRTUAL(UpdateInteractingState,);
    
    UFUNCTION()
    void UpdateHoverState(bool bHovering) override PURE_VIRTUAL(UpdateHoverState,);
    
};

