#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "SplitMeshesToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    USplitMeshesToolBuilder();

};

