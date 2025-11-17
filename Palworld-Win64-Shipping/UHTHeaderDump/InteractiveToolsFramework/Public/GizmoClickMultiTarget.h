#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GizmoClickMultiTarget.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoClickMultiTarget : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoClickMultiTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier) PURE_VIRTUAL(UpdateInteractingState,);
    
    UFUNCTION()
    virtual void UpdateHoverState(bool bHovering, uint32 InPartIdentifier) PURE_VIRTUAL(UpdateHoverState,);
    
    UFUNCTION()
    virtual void UpdateHittableState(bool bHittable, uint32 InPartIdentifier) PURE_VIRTUAL(UpdateHittableState,);
    
};

