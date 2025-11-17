#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "AddPrimitiveToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UAddPrimitiveToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UAddPrimitiveToolBuilder();

};

