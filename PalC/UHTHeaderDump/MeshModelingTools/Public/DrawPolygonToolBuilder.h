#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolBuilder -FallbackName=InteractiveToolBuilder
#include "DrawPolygonToolBuilder.generated.h"

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UDrawPolygonToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UDrawPolygonToolBuilder();

};

