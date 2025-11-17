#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "CombineMeshesToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UCombineMeshesToolBuilder();

};

