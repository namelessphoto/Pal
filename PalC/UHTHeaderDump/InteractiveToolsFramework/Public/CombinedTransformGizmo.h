#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EToolContextCoordinateSystem.h"
#include "InteractiveGizmo.h"
#include "CombinedTransformGizmo.generated.h"

class UGizmoComponentAxisSource;
class UGizmoConstantFrameAxisSource;
class UGizmoTransformChangeStateTarget;
class UPrimitiveComponent;
class UTransformProxy;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UCombinedTransformGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransformProxy* ActiveTarget;
    
    UPROPERTY()
    bool bSnapToWorldGrid;
    
    UPROPERTY()
    bool bGridSizeIsExplicit;
    
    UPROPERTY()
    FVector ExplicitGridSize;
    
    UPROPERTY()
    bool bRotationGridSizeIsExplicit;
    
    UPROPERTY()
    FRotator ExplicitRotationGridSize;
    
    UPROPERTY()
    bool bSnapToWorldRotGrid;
    
    UPROPERTY()
    bool bUseContextCoordinateSystem;
    
    UPROPERTY()
    EToolContextCoordinateSystem CurrentCoordinateSystem;
    
protected:
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(Instanced)
    TArray<UPrimitiveComponent*> NonuniformScaleComponents;
    
    UPROPERTY()
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY()
    UGizmoConstantFrameAxisSource* CameraAxisSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisXSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisZSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisXSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisZSource;
    
    UPROPERTY()
    UGizmoTransformChangeStateTarget* StateTarget;
    
public:
    UCombinedTransformGizmo();

};

