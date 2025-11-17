#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshElementsVisualizerProperties.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    bool bShowWireframe;
    
    UPROPERTY(EditAnywhere)
    bool bShowBorders;
    
    UPROPERTY(EditAnywhere)
    bool bShowUVSeams;
    
    UPROPERTY(EditAnywhere)
    bool bShowNormalSeams;
    
    UPROPERTY(EditAnywhere)
    bool bShowColorSeams;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ThicknessScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FColor WireframeColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FColor BoundaryEdgeColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FColor UVSeamColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FColor NormalSeamColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FColor ColorSeamColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DepthBias;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAdjustDepthBiasUsingMeshSize;
    
    UMeshElementsVisualizerProperties();

};

