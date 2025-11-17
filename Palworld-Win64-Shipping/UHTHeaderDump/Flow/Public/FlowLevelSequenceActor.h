#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "FlowLevelSequenceActor.generated.h"

class ULevelSequence;

UCLASS()
class FLOW_API AFlowLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_ReplicatedLevelSequenceAsset)
    ULevelSequence* ReplicatedLevelSequenceAsset;
    
public:
    AFlowLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_ReplicatedLevelSequenceAsset();
    
};

