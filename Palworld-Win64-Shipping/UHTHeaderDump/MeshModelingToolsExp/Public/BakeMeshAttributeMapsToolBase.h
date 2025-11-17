#pragma once
#include "CoreMinimal.h"
#include "BakeMeshAttributeTool.h"
#include "EBakeMapType.h"
#include "BakeMeshAttributeMapsToolBase.generated.h"

class UBakeVisualizationProperties;
class UMaterialInstanceDynamic;
class UPreviewMesh;
class UTexture2D;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UBakeVisualizationProperties* VisualizationProps;
    
    UPROPERTY()
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY()
    UMaterialInstanceDynamic* PreviewMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* BentNormalPreviewMaterial;
    
    UPROPERTY()
    TMap<EBakeMapType, UTexture2D*> CachedMaps;
    
    UPROPERTY()
    UTexture2D* EmptyNormalMap;
    
    UPROPERTY()
    UTexture2D* EmptyColorMapBlack;
    
    UPROPERTY()
    UTexture2D* EmptyColorMapWhite;
    
public:
    UBakeMeshAttributeMapsToolBase();

};

