#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "UVProjectionTool.generated.h"

class UCombinedTransformGizmo;
class UExistingMeshMaterialProperties;
class UMaterialInstanceDynamic;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshUVChannelProperties;
class UPreviewGeometry;
class USingleClickInputBehavior;
class UTransformProxy;
class UUVProjectionOperatorFactory;
class UUVProjectionToolEditActions;
class UUVProjectionToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UUVProjectionTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY()
    UUVProjectionToolProperties* BasicProperties;
    
    UPROPERTY()
    UUVProjectionToolEditActions* EditActions;
    
    UPROPERTY()
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    UMaterialInstanceDynamic* CheckerMaterial;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
    UPROPERTY()
    UUVProjectionOperatorFactory* OperatorFactory;
    
    UPROPERTY()
    UPreviewGeometry* EdgeRenderer;
    
    UPROPERTY()
    USingleClickInputBehavior* ClickToSetPlaneBehavior;
    
public:
    UUVProjectionTool();

};

