#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "EditUVIslandsTool.generated.h"

class AInternalToolFrameworkActor;
class UDynamicMeshComponent;
class UExistingMeshMaterialProperties;
class UMaterialInstanceDynamic;
class UMultiTransformer;
class UPolygonSelectionMechanic;

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UEditUVIslandsTool : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY()
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY()
    UMaterialInstanceDynamic* CheckerMaterial;
    
protected:
    UPROPERTY()
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(Instanced)
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY()
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPROPERTY()
    UMultiTransformer* MultiTransformer;
    
public:
    UEditUVIslandsTool();

};

