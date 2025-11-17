#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "PalNiagaraDataInterfaceSoundPlayer.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class PAL_API UPalNiagaraDataInterfaceSoundPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
    UPalNiagaraDataInterfaceSoundPlayer();

};

