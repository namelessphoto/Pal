#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseMeshProcessingToolBuilder -FallbackName=BaseMeshProcessingToolBuilder
#include "SmoothMeshToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder {
    GENERATED_BODY()
public:
    USmoothMeshToolBuilder();

};

