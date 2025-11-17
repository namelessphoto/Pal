#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPersistentSoundPlayer.generated.h"

class AActor;
class UAkAudioEvent;

UCLASS()
class UPalPersistentSoundPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FadeDuration;
    
private:
    UPROPERTY()
    TWeakObjectPtr<AActor> PlayActor;
    
public:
    UPalPersistentSoundPlayer();

};

