#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleClickTool -FallbackName=SingleClickTool
#include "AddPatchTool.generated.h"

class UAddPatchToolProperties;
class UNewMeshMaterialProperties;
class UPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UAddPatchTool : public USingleClickTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAddPatchToolProperties* ShapeSettings;
    
    UPROPERTY()
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
public:
    UAddPatchTool();

};

