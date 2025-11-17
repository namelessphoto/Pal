#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "CubeGridToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UCubeGridToolBuilder();

};

