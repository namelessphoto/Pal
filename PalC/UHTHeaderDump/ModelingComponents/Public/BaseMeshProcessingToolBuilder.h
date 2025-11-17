#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "BaseMeshProcessingToolBuilder.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UBaseMeshProcessingToolBuilder();

};

