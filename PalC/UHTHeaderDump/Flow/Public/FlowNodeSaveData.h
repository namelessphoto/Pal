#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "FlowNodeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowNodeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FGuid NodeGuid;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<uint8> NodeData;
    
    FFlowNodeSaveData();
};

