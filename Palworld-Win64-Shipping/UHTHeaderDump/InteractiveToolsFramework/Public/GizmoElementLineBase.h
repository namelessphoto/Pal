#pragma once
#include "CoreMinimal.h"
#include "GizmoElementBase.h"
#include "GizmoElementLineRenderStateAttributes.h"
#include "GizmoElementLineBase.generated.h"

UCLASS(Abstract, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoElementLineBase : public UGizmoElementBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGizmoElementLineRenderStateAttributes LineRenderAttributes;
    
    UPROPERTY()
    float LineThickness;
    
    UPROPERTY()
    bool bScreenSpaceLine;
    
    UPROPERTY(EditAnywhere)
    float HoverLineThicknessMultiplier;
    
    UPROPERTY(EditAnywhere)
    float InteractLineThicknessMultiplier;
    
public:
    UGizmoElementLineBase();

};

