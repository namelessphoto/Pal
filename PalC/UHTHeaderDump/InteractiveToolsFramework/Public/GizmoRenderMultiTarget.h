#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GizmoRenderMultiTarget.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoRenderMultiTarget : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoRenderMultiTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier) PURE_VIRTUAL(UpdateVisibilityState,);
    
};

