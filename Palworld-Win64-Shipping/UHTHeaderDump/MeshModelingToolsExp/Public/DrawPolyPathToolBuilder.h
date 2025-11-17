#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointToolBuilder -FallbackName=MeshSurfacePointToolBuilder
#include "DrawPolyPathToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder {
    GENERATED_BODY()
public:
    UDrawPolyPathToolBuilder();

};

