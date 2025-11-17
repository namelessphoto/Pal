#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioFinished__DelegateSignature -FallbackName=OnAudioFinishedDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioPlaybackPercent__DelegateSignature -FallbackName=OnAudioPlaybackPercentDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQueueSubtitles__DelegateSignature -FallbackName=OnQueueSubtitlesDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneAudioTriggerChannel -FallbackName=MovieSceneAudioTriggerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneActorReferenceData.h"
#include "MovieSceneStringChannel.h"
#include "MovieSceneAudioSection.generated.h"

class USoundAttenuation;
class USoundBase;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneAudioSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float AudioStartTime;
    
    UPROPERTY()
    float AudioDilationFactor;
    
    UPROPERTY()
    float AudioVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY()
    TMap<FName, FMovieSceneFloatChannel> Inputs_Float;
    
    UPROPERTY()
    TMap<FName, FMovieSceneStringChannel> Inputs_String;
    
    UPROPERTY()
    TMap<FName, FMovieSceneBoolChannel> Inputs_Bool;
    
    UPROPERTY()
    TMap<FName, FMovieSceneIntegerChannel> Inputs_Int;
    
    UPROPERTY()
    TMap<FName, FMovieSceneAudioTriggerChannel> Inputs_Trigger;
    
    UPROPERTY()
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(EditAnywhere)
    bool bLooping;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressSubtitles;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY()
    FOnQueueSubtitles OnQueueSubtitles;
    
    UPROPERTY()
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY()
    FOnAudioPlaybackPercent OnAudioPlaybackPercent;
    
public:
    UMovieSceneAudioSection();

    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundBase* InSound);
    
    UFUNCTION(BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
    UFUNCTION(BlueprintPure)
    USoundBase* GetSound() const;
    
};

