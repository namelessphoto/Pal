#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoElementBase.h"
#include "GizmoElementCylinder.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCylinder : public UGizmoElementBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Base;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    float Height;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    int32 NumSides;
    
public:
    UGizmoElementCylinder();

};

