#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PalHUDServiceProviderInterface.generated.h"

class UAkAudioEvent;
class UPalSoundPlayer;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UPalHUDServiceProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IPalHUDServiceProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void PlayAkSound(UAkAudioEvent* AkEvent) PURE_VIRTUAL(PlayAkSound,);
    
    UFUNCTION(BlueprintCallable)
    virtual UPalSoundPlayer* GetSoundPlayer() PURE_VIRTUAL(GetSoundPlayer, return NULL;);
    
};

