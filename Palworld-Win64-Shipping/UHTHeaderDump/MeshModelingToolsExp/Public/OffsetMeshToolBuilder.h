#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=BaseMeshProcessingToolBuilder -FallbackName=BaseMeshProcessingToolBuilder
#include "OffsetMeshToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder {
    GENERATED_BODY()
public:
    UOffsetMeshToolBuilder();

};

