#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalAISightResponse.generated.h"

class UPalAISightResponsePreset;

UCLASS()
class PAL_API UPalAISightResponse : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPalAISightResponsePreset* SightResponsePreset;
    
public:
    UPalAISightResponse();

};

