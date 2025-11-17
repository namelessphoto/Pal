#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeTool.h"
#include "BakeMeshAttributeVertexTool.generated.h"

class UBakeInputMeshProperties;
class UBakeMeshAttributeVertexToolProperties;
class UMaterialInstanceDynamic;
class UPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBakeInputMeshProperties* InputMeshSettings;
    
    UPROPERTY()
    UBakeMeshAttributeVertexToolProperties* Settings;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PreviewMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PreviewAlphaMaterial;
    
public:
    UBakeMeshAttributeVertexTool();

};

