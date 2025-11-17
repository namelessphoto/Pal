#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseAcousticTextureCookedData -FallbackName=WwiseAcousticTextureCookedData
#include "AkAudioType.h"
#include "AkAcousticTexture.generated.h"

UCLASS()
class AKAUDIO_API UAkAcousticTexture : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseAcousticTextureCookedData AcousticTextureCookedData;
    
    UAkAcousticTexture();

};

