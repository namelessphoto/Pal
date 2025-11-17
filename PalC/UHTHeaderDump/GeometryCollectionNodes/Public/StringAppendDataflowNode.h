#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "StringAppendDataflowNode.generated.h"

USTRUCT()
struct FStringAppendDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString String1;
    
    UPROPERTY(EditAnywhere)
    FString String2;
    
    UPROPERTY()
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FStringAppendDataflowNode();
};

