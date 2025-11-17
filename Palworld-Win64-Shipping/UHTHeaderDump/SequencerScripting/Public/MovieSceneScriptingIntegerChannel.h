#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingChannel.h"
#include "MovieSceneScriptingIntegerChannel.generated.h"

class UMovieSceneScriptingIntegerKey;
class UMovieSceneScriptingKey;

UCLASS()
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingIntegerChannel();

    UFUNCTION(BlueprintCallable)
    void SetDefault(int32 InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingIntegerKey* AddKey(const FFrameNumber& InTime, int32 NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

