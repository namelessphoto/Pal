#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "IntToStringDataflowNode.generated.h"

USTRUCT()
struct FIntToStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Int;
    
    UPROPERTY()
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FIntToStringDataflowNode();
};

