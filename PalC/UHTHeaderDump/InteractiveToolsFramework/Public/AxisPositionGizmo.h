#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InteractiveGizmo.h"
#include "AxisPositionGizmo.generated.h"

class IGizmoAxisSource;
class UGizmoAxisSource;
class IGizmoClickTarget;
class UGizmoClickTarget;
class IGizmoFloatParameterSource;
class UGizmoFloatParameterSource;
class IGizmoStateTarget;
class UGizmoStateTarget;
class UClickDragInputBehavior;
class UGizmoViewContext;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisPositionGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoFloatParameterSource> ParameterSource;
    
    UPROPERTY()
    UGizmoViewContext* GizmoViewContext;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> hitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    UClickDragInputBehavior* MouseBehavior;
    
    UPROPERTY()
    bool bEnableSignedAxis;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector InteractionOrigin;
    
    UPROPERTY()
    FVector InteractionAxis;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    float InteractionStartParameter;
    
    UPROPERTY()
    float InteractionCurParameter;
    
    UPROPERTY()
    float ParameterSign;
    
    UAxisPositionGizmo();

};

