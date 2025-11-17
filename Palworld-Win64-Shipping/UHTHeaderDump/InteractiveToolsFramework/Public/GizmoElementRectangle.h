#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoElementLineBase.h"
#include "GizmoElementRectangle.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementRectangle : public UGizmoElementLineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    float Width;
    
    UPROPERTY()
    float Height;
    
    UPROPERTY()
    FVector UpDirection;
    
    UPROPERTY()
    FVector SideDirection;
    
    UPROPERTY()
    bool bDrawMesh;
    
    UPROPERTY()
    bool bDrawLine;
    
    UPROPERTY()
    bool bHitMesh;
    
    UPROPERTY()
    bool bHitLine;
    
public:
    UGizmoElementRectangle();

};

