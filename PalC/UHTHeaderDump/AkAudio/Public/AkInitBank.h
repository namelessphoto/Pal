#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WwiseResourceLoader -ObjectName=WwiseInitBankCookedData -FallbackName=WwiseInitBankCookedData
#include "AkAudioType.h"
#include "AkInitBank.generated.h"

UCLASS()
class AKAUDIO_API UAkInitBank : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FWwiseInitBankCookedData InitBankCookedData;
    
    UAkInitBank();

};

