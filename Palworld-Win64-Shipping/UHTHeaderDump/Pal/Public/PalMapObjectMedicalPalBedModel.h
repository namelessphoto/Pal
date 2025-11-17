#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPlayerBedModuleOwnerInterface.h"
#include "PalMapObjectWorkerAvailableFacilityInterface.h"
#include "PalMapObjectMedicalPalBedModel.generated.h"

class AActor;
class APalCharacter;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalAIActionBase;
class UPalIndividualCharacterHandle;
class UPalMapObjectMedicalPalBedModel;
class UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent;

UCLASS()
class PAL_API UPalMapObjectMedicalPalBedModel : public UPalMapObjectConcreteModelBase, public IPalMapObjectPlayerBedModuleOwnerInterface, public IPalMapObjectWorkerAvailableFacilityInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectMedicalPalBedModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate OnUpdateSleepingCharacterDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalIndividualCharacterHandle* SleepingCharacterHandle;
    
    UPROPERTY(EditDefaultsOnly)
    FVector RemovedSleepLocationOffset;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AdditionalHealingRate;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float AffectSanityRate;
    
public:
    UPalMapObjectMedicalPalBedModel();

private:
    UFUNCTION()
    void OnNightSkip();
    
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnFinishSleepAction(UPalAIActionBase* action);
    
public:
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetSleepingHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSleepingCharacterHandle();
    
protected:
    UFUNCTION(BlueprintPure)
    static void CalcCharacterLocationAndRotationOffset(const FName CharacterID, const APalCharacter* Character, const FName MapObjectId, const UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent* LocationOffsetComponent, FVector& OutLocationOffset, FQuat& OutRotationOffset);
    

    // Fix for true pure virtual functions not being implemented
};

