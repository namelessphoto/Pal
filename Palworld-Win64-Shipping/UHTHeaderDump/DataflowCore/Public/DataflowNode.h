#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.generated.h"

USTRUCT()
struct DATAFLOWCORE_API FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    FDataflowNode();
};

