#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "ConvertToPolygonsToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UConvertToPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UConvertToPolygonsToolBuilder();

};

