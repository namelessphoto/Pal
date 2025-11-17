#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedTool -FallbackName=BaseCreateFromSelectedTool
#include "CSGMeshesTool.generated.h"

class UCSGMeshesToolProperties;
class ULineSetComponent;
class UMaterialInstanceDynamic;
class UPreviewMesh;
class UTrimMeshesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UCSGMeshesTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCSGMeshesToolProperties* CSGProperties;
    
    UPROPERTY()
    UTrimMeshesToolProperties* TrimProperties;
    
    UPROPERTY()
    TArray<UPreviewMesh*> OriginalMeshPreviews;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PreviewsGhostMaterial;
    
    UPROPERTY(Instanced)
    ULineSetComponent* DrawnLineSet;
    
public:
    UCSGMeshesTool();

};

