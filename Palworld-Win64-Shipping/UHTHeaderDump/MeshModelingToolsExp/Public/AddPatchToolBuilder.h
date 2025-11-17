#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "AddPatchToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLSEXP_API UAddPatchToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UAddPatchToolBuilder();

};

