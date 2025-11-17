#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoClickMultiTarget.h"
#include "GizmoElementHitMultiTarget.generated.h"

class UGizmoElementBase;
class UGizmoViewContext;
class UTransformProxy;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementHitMultiTarget : public UObject, public IGizmoClickMultiTarget {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGizmoElementBase* GizmoElement;
    
    UPROPERTY()
    UGizmoViewContext* GizmoViewContext;
    
    UPROPERTY()
    UTransformProxy* GizmoTransformProxy;
    
    UGizmoElementHitMultiTarget();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier) override PURE_VIRTUAL(UpdateInteractingState,);
    
    UFUNCTION()
    void UpdateHoverState(bool bHovering, uint32 InPartIdentifier) override PURE_VIRTUAL(UpdateHoverState,);
    
    UFUNCTION()
    void UpdateHittableState(bool bHittable, uint32 InPartIdentifier) override PURE_VIRTUAL(UpdateHittableState,);
    
};

