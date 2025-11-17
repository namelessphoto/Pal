#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralBoolDataflowNode.generated.h"

USTRUCT()
struct FMakeLiteralBoolDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Value;
    
    UPROPERTY()
    bool bool;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralBoolDataflowNode();
};

