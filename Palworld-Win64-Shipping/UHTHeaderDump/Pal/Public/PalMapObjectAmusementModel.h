#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectWorkerAvailableFacilityInterface.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectAmusementModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalAIActionBase;
class UPalIndividualCharacterHandle;
class UPalMapObjectAmusementModel;

UCLASS()
class PAL_API UPalMapObjectAmusementModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectWorkerAvailableFacilityInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectAmusementModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnUpdateCharacterDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalIndividualCharacterHandle* HealingCharacterHandle;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AffectSanityRate;
    
    UPROPERTY(Transient)
    TSubclassOf<UPalAIActionBase> AIActionClass;
    
public:
    UPalMapObjectAmusementModel();

private:
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnFinishHealingAction(UPalAIActionBase* action);
    
public:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetHealingHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCharacterHandle();
    

    // Fix for true pure virtual functions not being implemented
};

