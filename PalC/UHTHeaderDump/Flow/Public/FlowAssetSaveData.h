#pragma once
#include "CoreMinimal.h"
#include "FlowNodeSaveData.h"
#include "FlowAssetSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowAssetSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FString WorldName;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FString InstanceName;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<uint8> AssetData;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FFlowNodeSaveData> NodeRecords;
    
    FFlowAssetSaveData();
};

