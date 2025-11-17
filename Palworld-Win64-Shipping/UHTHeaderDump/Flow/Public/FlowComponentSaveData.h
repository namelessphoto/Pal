#pragma once
#include "CoreMinimal.h"
#include "FlowComponentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowComponentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FString WorldName;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FString ActorInstanceName;
    
    UPROPERTY(SaveGame)
    TArray<uint8> ComponentData;
    
    FFlowComponentSaveData();
};

