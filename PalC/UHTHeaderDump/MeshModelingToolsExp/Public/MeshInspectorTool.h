#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "MeshInspectorTool.generated.h"

class UExistingMeshMaterialProperties;
class ULineSetComponent;
class UMaterialInterface;
class UMeshInspectorProperties;
class UPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UMeshInspectorTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshInspectorProperties* Settings;
    
    UPROPERTY()
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(Instanced)
    ULineSetComponent* DrawnLineSet;
    
    UPROPERTY()
    UMaterialInterface* DefaultMaterial;
    
public:
    UMeshInspectorTool();

};

