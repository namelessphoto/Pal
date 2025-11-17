#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "HashStringDataflowNode.generated.h"

USTRUCT()
struct FHashStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString String;
    
    UPROPERTY()
    int32 Hash;
    
    GEOMETRYCOLLECTIONNODES_API FHashStringDataflowNode();
};

