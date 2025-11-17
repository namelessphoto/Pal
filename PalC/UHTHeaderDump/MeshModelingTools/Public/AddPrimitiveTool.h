#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolCameraFocusAPI -FallbackName=InteractiveToolCameraFocusAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleClickTool -FallbackName=SingleClickTool
#include "AddPrimitiveTool.generated.h"

class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UDragAlignmentMechanic;
class UNewMeshMaterialProperties;
class UPreviewMesh;
class UProceduralShapeToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UAddPrimitiveTool : public USingleClickTool, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UProceduralShapeToolProperties* ShapeSettings;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY()
    UCombinedTransformGizmo* Gizmo;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY()
    FString AssetName;
    
public:
    UAddPrimitiveTool();


    // Fix for true pure virtual functions not being implemented
};

