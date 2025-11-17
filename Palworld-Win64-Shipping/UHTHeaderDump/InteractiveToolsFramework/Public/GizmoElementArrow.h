#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGizmoElementArrowHeadType.h"
#include "GizmoElementBase.h"
#include "GizmoElementArrow.generated.h"

class UGizmoElementBox;
class UGizmoElementCone;
class UGizmoElementCylinder;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementArrow : public UGizmoElementBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGizmoElementCylinder* CylinderElement;
    
    UPROPERTY()
    UGizmoElementCone* ConeElement;
    
    UPROPERTY()
    UGizmoElementBox* BoxElement;
    
    UPROPERTY()
    FVector Base;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    FVector SideDirection;
    
    UPROPERTY()
    float BodyLength;
    
    UPROPERTY()
    float BodyRadius;
    
    UPROPERTY()
    float HeadLength;
    
    UPROPERTY()
    float HeadRadius;
    
    UPROPERTY()
    int32 NumSides;
    
    UPROPERTY()
    EGizmoElementArrowHeadType HeadType;
    
public:
    UGizmoElementArrow();

};

