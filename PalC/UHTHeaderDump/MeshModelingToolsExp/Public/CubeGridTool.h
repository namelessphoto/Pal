#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolCameraFocusAPI -FallbackName=InteractiveToolCameraFocusAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolNestedAcceptCancelAPI -FallbackName=InteractiveToolNestedAcceptCancelAPI
#include "CubeGridTool.generated.h"

class UClickDragInputBehavior;
class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UCubeGridDuringActivityActions;
class UCubeGridToolActions;
class UCubeGridToolProperties;
class UDragAlignmentMechanic;
class ULocalClickDragInputBehavior;
class ULocalSingleClickInputBehavior;
class UMeshOpPreviewWithBackgroundCompute;
class UMouseHoverBehavior;
class UNewMeshMaterialProperties;
class UPreviewGeometry;
class UToolTarget;
class UTransformProxy;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UCubeGridTool : public UInteractiveTool, public IInteractiveToolNestedAcceptCancelAPI, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCombinedTransformGizmo* GridGizmo;
    
    UPROPERTY()
    UDragAlignmentMechanic* GridGizmoAlignmentMechanic;
    
    UPROPERTY()
    UTransformProxy* GridGizmoTransformProxy;
    
    UPROPERTY()
    UPreviewGeometry* LineSets;
    
    UPROPERTY()
    UClickDragInputBehavior* ClickDragBehavior;
    
    UPROPERTY()
    UMouseHoverBehavior* HoverBehavior;
    
    UPROPERTY()
    ULocalSingleClickInputBehavior* CtrlMiddleClickBehavior;
    
    UPROPERTY()
    ULocalClickDragInputBehavior* MiddleClickDragBehavior;
    
    UPROPERTY()
    UCubeGridToolProperties* Settings;
    
    UPROPERTY()
    UCubeGridToolActions* ToolActions;
    
    UPROPERTY()
    UCubeGridDuringActivityActions* DuringActivityActions;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY()
    UToolTarget* Target;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
public:
    UCubeGridTool();


    // Fix for true pure virtual functions not being implemented
};

