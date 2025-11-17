#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "RecomputeUVsToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    URecomputeUVsToolBuilder();

};

