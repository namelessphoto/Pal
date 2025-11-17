#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoElementBase.h"
#include "GizmoElementCone.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementCone : public UGizmoElementBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Origin;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    float Height;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    int32 NumSides;
    
public:
    UGizmoElementCone();

};

