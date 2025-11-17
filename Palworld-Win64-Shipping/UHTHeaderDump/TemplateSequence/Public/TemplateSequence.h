#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "TemplateSequence.generated.h"

class AActor;
class UMovieScene;

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    TSoftClassPtr<AActor> BoundActorClass;
    
    UPROPERTY()
    TSoftObjectPtr<AActor> BoundPreviewActor;
    
    UPROPERTY()
    TMap<FGuid, FName> BoundActorComponents;
    
    UTemplateSequence();

};

