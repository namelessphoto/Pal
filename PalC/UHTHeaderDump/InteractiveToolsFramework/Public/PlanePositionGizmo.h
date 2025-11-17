#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "InteractiveGizmo.h"
#include "PlanePositionGizmo.generated.h"

class IGizmoAxisSource;
class UGizmoAxisSource;
class IGizmoClickTarget;
class UGizmoClickTarget;
class IGizmoStateTarget;
class UGizmoStateTarget;
class IGizmoVec2ParameterSource;
class UGizmoVec2ParameterSource;
class UClickDragInputBehavior;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UPlanePositionGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> hitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    UClickDragInputBehavior* MouseBehavior;
    
    UPROPERTY()
    bool bEnableSignedAxis;
    
    UPROPERTY()
    bool bFlipX;
    
    UPROPERTY()
    bool bFlipY;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector InteractionOrigin;
    
    UPROPERTY()
    FVector InteractionNormal;
    
    UPROPERTY()
    FVector InteractionAxisX;
    
    UPROPERTY()
    FVector InteractionAxisY;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    FVector2D InteractionStartParameter;
    
    UPROPERTY()
    FVector2D InteractionCurParameter;
    
    UPROPERTY()
    FVector2D ParameterSigns;
    
    UPlanePositionGizmo();

};

