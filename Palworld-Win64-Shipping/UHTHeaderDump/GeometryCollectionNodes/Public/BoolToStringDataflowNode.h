#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "BoolToStringDataflowNode.generated.h"

USTRUCT()
struct FBoolToStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bool;
    
    UPROPERTY()
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FBoolToStringDataflowNode();
};

