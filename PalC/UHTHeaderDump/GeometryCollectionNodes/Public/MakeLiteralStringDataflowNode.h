#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralStringDataflowNode.generated.h"

USTRUCT()
struct FMakeLiteralStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Value;
    
    UPROPERTY()
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralStringDataflowNode();
};

