#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectCharacterContainerModule.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(BlueprintType)
class UPalMapObjectCharacterContainerModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_TargetContainer)
    UPalIndividualCharacterContainer* TargetContainer;
    
public:
    UPalMapObjectCharacterContainerModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryMoveCharacterToContainerFrom(UPalIndividualCharacterSlot* fromSlot);
    
    UFUNCTION(BlueprintPure)
    bool TryGetContainer(UPalIndividualCharacterContainer*& OutContainer) const;
    
protected:
    UFUNCTION()
    void OnRep_TargetContainer();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsCompleteSetup() const;
    
    UFUNCTION(BlueprintPure)
    FPalContainerId GetContainerId() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterContainer* GetContainer() const;
    
};

