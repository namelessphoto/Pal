#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "MovieSceneActorPredictionFailureDelegate.h"
#include "MovieSceneActorPredictionResultDelegate.h"
#include "MovieSceneAsyncAction_SequencePrediction.generated.h"

class UMovieSceneAsyncAction_SequencePrediction;
class UMovieSceneSequencePlayer;
class USceneComponent;

UCLASS()
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMovieSceneActorPredictionResult Result;
    
    UPROPERTY(BlueprintAssignable)
    FMovieSceneActorPredictionFailure Failure;
    
private:
    UPROPERTY()
    UMovieSceneSequencePlayer* SequencePlayer;
    
    UPROPERTY(Instanced)
    USceneComponent* SceneComponent;
    
public:
    UMovieSceneAsyncAction_SequencePrediction();

    UFUNCTION(BlueprintCallable)
    static UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime);
    
};

