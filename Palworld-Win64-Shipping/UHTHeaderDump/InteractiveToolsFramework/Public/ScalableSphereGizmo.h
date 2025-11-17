#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InteractiveGizmo.h"
#include "ScalableSphereGizmo.generated.h"

class UTransformProxy;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UScalableSphereGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float HitErrorThreshold;
    
    UPROPERTY()
    FText TransactionDescription;
    
private:
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    bool bIsHovering;
    
    UPROPERTY()
    bool bIsDragging;
    
    UPROPERTY()
    UTransformProxy* ActiveTarget;
    
    UPROPERTY()
    FVector ActiveAxis;
    
    UPROPERTY()
    FVector DragStartWorldPosition;
    
    UPROPERTY()
    FVector DragCurrentPositionProjected;
    
    UPROPERTY()
    float InteractionStartParameter;
    
public:
    UScalableSphereGizmo();

};

