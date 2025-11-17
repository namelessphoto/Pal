#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalSoundDebugModel.generated.h"

class UAkAudioEvent;

UCLASS()
class APalSoundDebugModel : public AActor {
    GENERATED_BODY()
public:
    APalSoundDebugModel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void Initialize(UAkAudioEvent* AudioEvent);
    
};

