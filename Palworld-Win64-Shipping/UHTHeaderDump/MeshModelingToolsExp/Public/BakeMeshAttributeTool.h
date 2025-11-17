#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolExclusiveToolAPI -FallbackName=InteractiveToolExclusiveToolAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "BakeMeshAttributeTool.generated.h"

class UBakeCurvatureMapToolProperties;
class UBakeMultiTexture2DProperties;
class UBakeOcclusionMapToolProperties;
class UBakeTexture2DProperties;
class UMaterialInstanceDynamic;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolExclusiveToolAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBakeOcclusionMapToolProperties* OcclusionSettings;
    
    UPROPERTY()
    UBakeCurvatureMapToolProperties* CurvatureSettings;
    
    UPROPERTY()
    UBakeTexture2DProperties* TextureSettings;
    
    UPROPERTY()
    UBakeMultiTexture2DProperties* MultiTextureSettings;
    
    UPROPERTY()
    UMaterialInstanceDynamic* WorkingPreviewMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* ErrorPreviewMaterial;
    
public:
    UBakeMeshAttributeTool();


    // Fix for true pure virtual functions not being implemented
};

