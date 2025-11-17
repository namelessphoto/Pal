#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGizmoElementInteractionState.h"
#include "EGizmoElementState.h"
#include "EGizmoElementViewAlignType.h"
#include "EGizmoElementViewDependentType.h"
#include "GizmoElementMeshRenderStateAttributes.h"
#include "GizmoElementBase.generated.h"

UCLASS(Abstract, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    bool bEnabledForPerspectiveProjection;
    
    UPROPERTY()
    bool bEnabledForOrthographicProjection;
    
    UPROPERTY()
    bool bEnabledForDefaultState;
    
    UPROPERTY()
    bool bEnabledForHoveringState;
    
    UPROPERTY()
    bool bEnabledForInteractingState;
    
    UPROPERTY()
    uint32 PartIdentifier;
    
    UPROPERTY()
    FGizmoElementMeshRenderStateAttributes MeshRenderAttributes;
    
    UPROPERTY()
    EGizmoElementState ElementState;
    
    UPROPERTY()
    EGizmoElementInteractionState ElementInteractionState;
    
    UPROPERTY()
    EGizmoElementViewDependentType ViewDependentType;
    
    UPROPERTY()
    FVector ViewDependentAxis;
    
    UPROPERTY()
    float ViewDependentAngleTol;
    
    UPROPERTY()
    float ViewDependentAxialMaxCosAngleTol;
    
    UPROPERTY()
    float ViewDependentPlanarMinCosAngleTol;
    
    UPROPERTY()
    EGizmoElementViewAlignType ViewAlignType;
    
    UPROPERTY()
    FVector ViewAlignAxis;
    
    UPROPERTY()
    FVector ViewAlignNormal;
    
    UPROPERTY()
    float ViewAlignAxialAngleTol;
    
    UPROPERTY()
    float ViewAlignAxialMaxCosAngleTol;
    
    UPROPERTY()
    float PixelHitDistanceThreshold;
    
public:
    UGizmoElementBase();

};

