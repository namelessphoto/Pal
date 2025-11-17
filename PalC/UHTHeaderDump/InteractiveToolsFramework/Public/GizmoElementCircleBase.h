#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGizmoElementPartialType.h"
#include "GizmoElementLineBase.h"
#include "GizmoElementCircleBase.generated.h"

UCLASS(Abstract, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCircleBase : public UGizmoElementLineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    FVector Axis0;
    
    UPROPERTY()
    FVector Axis1;
    
    UPROPERTY()
    double Radius;
    
    UPROPERTY()
    int32 NumSegments;
    
    UPROPERTY()
    EGizmoElementPartialType PartialType;
    
    UPROPERTY()
    double PartialStartAngle;
    
    UPROPERTY()
    double PartialEndAngle;
    
    UPROPERTY()
    double PartialViewDependentMaxCosTol;
    
public:
    UGizmoElementCircleBase();

};

