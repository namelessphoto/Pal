#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "PolygonSelectionMechanicProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSelectVertices;
    
    UPROPERTY(EditAnywhere)
    bool bSelectEdges;
    
    UPROPERTY(EditAnywhere)
    bool bSelectFaces;
    
    UPROPERTY(EditAnywhere)
    bool bSelectEdgeLoops;
    
    UPROPERTY(EditAnywhere)
    bool bSelectEdgeRings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bHitBackFaces;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bEnableMarquee;
    
    UPROPERTY(EditAnywhere)
    bool bMarqueeIgnoreOcclusion;
    
    UPROPERTY(EditAnywhere)
    bool bPreferProjectedElement;
    
    UPROPERTY(EditAnywhere)
    bool bSelectDownRay;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreOcclusion;
    
    UPolygonSelectionMechanicProperties();

    UFUNCTION()
    void SelectAll();
    
    UFUNCTION()
    void InvertSelection();
    
};

