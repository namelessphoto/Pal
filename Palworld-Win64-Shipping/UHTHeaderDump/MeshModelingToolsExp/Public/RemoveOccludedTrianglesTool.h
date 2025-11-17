#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "RemoveOccludedTrianglesTool.generated.h"

class UMeshOpPreviewWithBackgroundCompute;
class UPolygroupLayersProperties;
class UPreviewMesh;
class URemoveOccludedTrianglesAdvancedProperties;
class URemoveOccludedTrianglesToolProperties;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    URemoveOccludedTrianglesToolProperties* BasicProperties;
    
    UPROPERTY()
    UPolygroupLayersProperties* PolygroupLayersProperties;
    
    UPROPERTY()
    URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;
    
    UPROPERTY()
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY()
    TArray<UPreviewMesh*> PreviewCopies;
    
public:
    URemoveOccludedTrianglesTool();

};

