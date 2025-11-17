#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "DeformMeshPolygonsTool.generated.h"

class AInternalToolFrameworkActor;
class UDeformMeshPolygonsTransformProperties;
class UDynamicMeshComponent;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDeformMeshPolygonsTool : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(Instanced)
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY()
    UDeformMeshPolygonsTransformProperties* TransformProps;
    
public:
    UDeformMeshPolygonsTool();

};

