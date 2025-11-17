#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceCameraSettings -FallbackName=LevelSequenceCameraSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "FlowNode.h"
#include "FlowNode_PlayLevelSequence.generated.h"

class UFlowLevelSequencePlayer;
class ULevelSequence;

UCLASS()
class FLOW_API UFlowNode_PlayLevelSequence : public UFlowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Sequence;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(EditAnywhere)
    bool bPlayReverse;
    
    UPROPERTY(EditAnywhere)
    FLevelSequenceCameraSettings CameraSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseGraphOwnerAsTransformOrigin;
    
    UPROPERTY(EditAnywhere)
    bool bReplicates;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysRelevant;
    
    UPROPERTY(EditAnywhere)
    bool bApplyOwnerTimeDilation;
    
protected:
    UPROPERTY()
    ULevelSequence* LoadedSequence;
    
    UPROPERTY()
    UFlowLevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(SaveGame)
    float StartTime;
    
    UPROPERTY(SaveGame)
    float ElapsedTime;
    
    UPROPERTY(SaveGame)
    float TimeDilation;
    
public:
    UFlowNode_PlayLevelSequence();

protected:
    UFUNCTION()
    void OnPlaybackFinished();
    
};

