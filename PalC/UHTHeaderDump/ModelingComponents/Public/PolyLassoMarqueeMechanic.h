#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "PolyLassoMarqueeMechanic.generated.h"

class UClickDragInputBehavior;
class UMouseHoverBehavior;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UPolyLassoMarqueeMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY()
    float SpacingTolerance;
    
    UPROPERTY()
    float LineThickness;
    
    UPROPERTY()
    FLinearColor LineColor;
    
    UPROPERTY()
    FLinearColor ClosedColor;
    
    UPROPERTY()
    bool bEnableFreehandPolygons;
    
    UPROPERTY()
    bool bEnableMultiClickPolygons;
    
protected:
    UPROPERTY()
    UClickDragInputBehavior* ClickDragBehavior;
    
    UPROPERTY()
    UMouseHoverBehavior* HoverBehavior;
    
public:
    UPolyLassoMarqueeMechanic();

};

