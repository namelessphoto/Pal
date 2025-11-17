#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_SubGraph.generated.h"

class UFlowAsset;

UCLASS()
class FLOW_API UFlowNode_SubGraph : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UFlowAsset> Asset;
    
    UPROPERTY(EditAnywhere)
    bool bCanInstanceIdenticalAsset;
    
    UPROPERTY(SaveGame)
    FString SavedAssetInstanceName;
    
public:
    UFlowNode_SubGraph();

};

