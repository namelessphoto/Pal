#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseGroupValueCookedData -FallbackName=WwiseGroupValueCookedData
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

UCLASS(Abstract)
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseGroupValueCookedData GroupValueCookedData;
    
    UPROPERTY()
    uint32 GroupShortId;
    
    UAkGroupValue();

};

