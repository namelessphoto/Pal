#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterHandleReference.h"
#include "PalIndividualCharacterHandleDimensionLocker.generated.h"

class UPalIndividualCharacterParameter;

UCLASS()
class UPalIndividualCharacterHandleDimensionLocker : public UPalIndividualCharacterHandleReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalIndividualCharacterParameter* MyParameter;
    
public:
    UPalIndividualCharacterHandleDimensionLocker();

};

