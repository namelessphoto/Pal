#pragma once
#include "CoreMinimal.h"
#include "PalIndividualCharacterSlot.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterReferenceSlot.generated.h"

UCLASS()
class UPalIndividualCharacterReferenceSlot : public UPalIndividualCharacterSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUpdateSlotReferenceHandleDelegate OnUpdateSlotReferenceHandleDelegate;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID IndividualId;
    
public:
    UPalIndividualCharacterReferenceSlot();

};

