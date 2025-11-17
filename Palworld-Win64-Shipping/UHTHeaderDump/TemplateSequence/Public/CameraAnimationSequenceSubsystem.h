#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "CameraAnimationSequenceSubsystem.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS()
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UCameraAnimationSequenceSubsystem();

};

