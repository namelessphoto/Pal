#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InteractiveGizmo.h"
#include "AxisAngleGizmo.generated.h"

class IGizmoAxisSource;
class UGizmoAxisSource;
class IGizmoClickTarget;
class UGizmoClickTarget;
class IGizmoFloatParameterSource;
class UGizmoFloatParameterSource;
class IGizmoStateTarget;
class UGizmoStateTarget;
class UClickDragInputBehavior;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisAngleGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoFloatParameterSource> AngleSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> hitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    UClickDragInputBehavior* MouseBehavior;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector RotationOrigin;
    
    UPROPERTY()
    FVector RotationAxis;
    
    UPROPERTY()
    FVector RotationPlaneX;
    
    UPROPERTY()
    FVector RotationPlaneY;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    float InteractionStartAngle;
    
    UPROPERTY()
    float InteractionCurAngle;
    
    UAxisAngleGizmo();

};

