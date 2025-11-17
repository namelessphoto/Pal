#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "MovieSceneScriptingActorReferenceChannel.generated.h"

class UMovieSceneScriptingActorReferenceKey;
class UMovieSceneScriptingKey;

UCLASS()
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingActorReferenceChannel();

    UFUNCTION(BlueprintCallable)
    void SetDefault(FMovieSceneObjectBindingID InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingActorReferenceKey* AddKey(const FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

