#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EdGraphNode -FallbackName=EdGraphNode
#include "DataflowEdNode.generated.h"

UCLASS()
class DATAFLOWENGINE_API UDataflowEdNode : public UEdGraphNode {
    GENERATED_BODY()
public:
    UDataflowEdNode();

};

