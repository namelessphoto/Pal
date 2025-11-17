#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "PalCharacterContainerManager.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(BlueprintType)
class PAL_API UPalCharacterContainerManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalContainerId, UPalIndividualCharacterContainer*> ContainerMap_InServer;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalContainerId, UPalIndividualCharacterContainer*> LocalContainerMap;
    
    UPROPERTY()
    TSet<FPalContainerId> LoadedContainerIDs;
    
public:
    UPalCharacterContainerManager();

    UFUNCTION(BlueprintPure)
    bool TryGetContainer(const FPalContainerId& ContainerId, UPalIndividualCharacterContainer*& Container) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterSlot* GetLocalSlot(const FPalContainerId& ContainerId, const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterContainer* GetLocalContainer(const FPalContainerId& ContainerId) const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterContainer* GetContainer(const FPalContainerId& ContainerId) const;
    

    // Fix for true pure virtual functions not being implemented
};

