#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterHandleReference.h"
#include "PalIndividualCharacterHandleGPS.generated.h"

class UPalIndividualCharacterParameter;

UCLASS()
class UPalIndividualCharacterHandleGPS : public UPalIndividualCharacterHandleReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalIndividualCharacterParameter* MyParameter;
    
public:
    UPalIndividualCharacterHandleGPS();

};

