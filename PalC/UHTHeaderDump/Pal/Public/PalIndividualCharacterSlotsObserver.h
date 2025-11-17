#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalIndividualCharacterSlotsObserver.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;

UCLASS()
class UPalIndividualCharacterSlotsObserver : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateContainerDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContainerDelegate OnUpdateContainerDelegate;
    
    UPalIndividualCharacterSlotsObserver();

    UFUNCTION()
    void OnUpdateSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle);
    
private:
    UFUNCTION()
    void OnUpdateContainerSlots(UPalIndividualCharacterContainer* Container);
    
public:
    UFUNCTION()
    void OnUpdateContainerSize(UPalIndividualCharacterContainer* Container);
    
private:
    UFUNCTION()
    void OnUpdateContainer(UPalIndividualCharacterContainer* Container);
    
};

