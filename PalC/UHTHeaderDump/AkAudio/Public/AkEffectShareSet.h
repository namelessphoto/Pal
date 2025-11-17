#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseLocalizedShareSetCookedData -FallbackName=WwiseLocalizedShareSetCookedData
#include "AkAudioType.h"
#include "AkEffectShareSet.generated.h"

UCLASS()
class AKAUDIO_API UAkEffectShareSet : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseLocalizedShareSetCookedData ShareSetCookedData;
    
    UAkEffectShareSet();

};

