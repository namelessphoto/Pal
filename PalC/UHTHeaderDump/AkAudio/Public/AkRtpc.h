#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseGameParameterCookedData -FallbackName=WwiseGameParameterCookedData
#include "AkAudioType.h"
#include "AkRtpc.generated.h"

UCLASS()
class AKAUDIO_API UAkRtpc : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseGameParameterCookedData GameParameterCookedData;
    
    UAkRtpc();

};

