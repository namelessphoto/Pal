#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MultiTransformer.generated.h"

class UCombinedTransformGizmo;
class UDragAlignmentMechanic;
class UInteractiveGizmoManager;
class UTransformProxy;

UCLASS()
class MODELINGCOMPONENTS_API UMultiTransformer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UInteractiveGizmoManager* GizmoManager;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UMultiTransformer();

};

