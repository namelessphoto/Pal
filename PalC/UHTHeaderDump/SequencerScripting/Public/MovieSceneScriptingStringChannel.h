#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "MovieSceneScriptingStringChannel.generated.h"

class UMovieSceneScriptingKey;
class UMovieSceneScriptingStringKey;

UCLASS()
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingStringChannel();

    UFUNCTION(BlueprintCallable)
    void SetDefault(const FString& InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingStringKey* AddKey(const FFrameNumber& InTime, const FString& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

