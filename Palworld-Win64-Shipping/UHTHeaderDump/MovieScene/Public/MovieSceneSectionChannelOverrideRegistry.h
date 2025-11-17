#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSectionChannelOverrideRegistry.generated.h"

class UMovieSceneChannelOverrideContainer;

UCLASS()
class MOVIESCENE_API UMovieSceneSectionChannelOverrideRegistry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, UMovieSceneChannelOverrideContainer*> Overrides;
    
public:
    UMovieSceneSectionChannelOverrideRegistry();

};

