#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ECSGOperation -FallbackName=ECSGOperation
#include "CSGMeshesToolProperties.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UCSGMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECSGOperation Operation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTryFixHoles;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bTryCollapseEdges;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float WindingThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bShowNewBoundaries;
    
    UPROPERTY(EditAnywhere)
    bool bShowSubtractedMesh;
    
    UPROPERTY(EditAnywhere)
    float SubtractedMeshOpacity;
    
    UPROPERTY(EditAnywhere)
    FLinearColor SubtractedMeshColor;
    
    UPROPERTY(EditAnywhere)
    bool bUseFirstMeshMaterials;
    
    UCSGMeshesToolProperties();

};

