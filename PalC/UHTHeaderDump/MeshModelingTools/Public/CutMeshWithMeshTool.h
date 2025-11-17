#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseCreateFromSelectedTool -FallbackName=BaseCreateFromSelectedTool
#include "CutMeshWithMeshTool.generated.h"

class UCutMeshWithMeshToolProperties;
class ULineSetComponent;
class UPreviewMesh;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UCutMeshWithMeshToolProperties* CutProperties;
    
    UPROPERTY()
    UPreviewMesh* IntersectPreviewMesh;
    
    UPROPERTY(Instanced)
    ULineSetComponent* DrawnLineSet;
    
public:
    UCutMeshWithMeshTool();

};

