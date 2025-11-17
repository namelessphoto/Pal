#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequencePlayer -FallbackName=LevelSequencePlayer
#include "FlowLevelSequencePlayer.generated.h"

class UFlowNode;

UCLASS()
class FLOW_API UFlowLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UFlowNode* FlowEventReceiver;
    
public:
    UFlowLevelSequencePlayer();

};

