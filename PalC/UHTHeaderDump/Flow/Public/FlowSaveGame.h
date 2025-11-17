#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "FlowAssetSaveData.h"
#include "FlowComponentSaveData.h"
#include "FlowSaveGame.generated.h"

UCLASS()
class FLOW_API UFlowSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString SaveSlotName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FFlowComponentSaveData> FlowComponents;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FFlowAssetSaveData> FlowInstances;
    
    UFlowSaveGame();

};

