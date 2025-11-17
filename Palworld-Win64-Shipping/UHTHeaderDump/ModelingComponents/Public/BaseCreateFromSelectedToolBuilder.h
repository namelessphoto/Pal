#pragma once
#include "CoreMinimal.h"
#include "MultiSelectionMeshEditingToolBuilder.h"
#include "BaseCreateFromSelectedToolBuilder.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UBaseCreateFromSelectedToolBuilder();

};

