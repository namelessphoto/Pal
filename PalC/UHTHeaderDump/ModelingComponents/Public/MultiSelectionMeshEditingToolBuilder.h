#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "MultiSelectionMeshEditingToolBuilder.generated.h"

UCLASS(Abstract, NonTransient)
class MODELINGCOMPONENTS_API UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UMultiSelectionMeshEditingToolBuilder();

};

