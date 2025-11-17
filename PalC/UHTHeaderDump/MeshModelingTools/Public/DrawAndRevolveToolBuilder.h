#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "DrawAndRevolveToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UDrawAndRevolveToolBuilder();

};

