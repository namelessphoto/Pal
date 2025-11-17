#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneScriptingChannel.generated.h"

UCLASS(Abstract, BlueprintType)
class UMovieSceneScriptingChannel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName ChannelName;
    
    UMovieSceneScriptingChannel();

};

