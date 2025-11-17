#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "InteractiveToolWithToolTargetsBuilder.generated.h"

UCLASS(Abstract, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UInteractiveToolWithToolTargetsBuilder();

};

